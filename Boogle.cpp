#include "Boogle.h"

Boogle::Boogle(QWidget* parent)
	: QMainWindow(parent)
{
	
	if (!QFile("history.txt").exists())
	{
		QMessageBox msgBox;
		QSpacerItem* horizontalSpacer = new QSpacerItem(250, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
		msgBox.setText("ERROR 0x15B16B history.txt NOT FOUND !");
		msgBox.setWindowTitle("Error");
		QGridLayout* layout = (QGridLayout*)msgBox.layout();
		layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
		msgBox.exec();		
		delete this;
	}
	ui.setupUi(this);
	ui.mainToolBar->close();
	
	setWindowTitle("Boogle Browser");
	setWindowIcon(QIcon(":/Boogle/images/fox.ico"));
	setStyleSheet("QToolTip{color:white}QTabBar::close-button{image: url(:/Boogle/images/tb-close.png)}QMainWindow{background-image:url(:/Boogle/images/bg.png);background-position:bottom}");
	setMinimumSize(1200, 700);
	//--------- sets background-color to a red/orange gradient color ------///
	/*setStyleSheet("* {color: qlineargradient(spread:pad, x1:0 y1:0, x2:1 y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"
	"background: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 red, stop:1 orange);}");*/
	//-----------------------------------------------------------------------

	//QMessageBox::information(this, "Information", "Bienvenue sur la version Beta de Boogle !<br/><br/> Avec cette nouvelle version, vous pouvez desormais creer des nouvelles fenetres en doublant cliquant sur un onglet au hasard. Vous pouvez aussi deplacer les differentes fenetres et les attacher a gauche, a droite, en bas ou en haut de la fenetre principale");

	createWindows();
	settings();
}

void Boogle::createWindows()
{
	m_dock = new QdockWidget(this);

	m_listDocks.append(m_dock);
	if (m_listDocks.length() < 2)
	{
		m_listDocks.at(0)->setMinimumWidth(1200);
		addDockWidget(Qt::LeftDockWidgetArea, m_listDocks.at(0));
	}
	else
	{
		addDockWidget(Qt::RightDockWidgetArea, m_dock);
		m_listDocks.at(0)->setMinimumWidth(0);
	}
	m_tabs = new TabWidget(this);
	connect(m_tabs, SIGNAL(tabBarDoubleClicked(int)), this, SLOT(openNewTab(int)));

	//connect(view->page()->profile(), SIGNAL(downloadRequested(QWebEngineDownloadItem *)), this, SLOT(downloadItem(QWebEngineDownloadItem *)));
	m_dock->setWidget(m_tabs);
}

void Boogle::settings()
{
	QWebEngineSettings::defaultSettings()->setAttribute(QWebEngineSettings::PluginsEnabled, true);
}


void Boogle::downloadItem(QWebEngineDownloadItem* download)
{
	download->setPath("C:/Users/Administrateur/Downloads");
	download->setSavePageFormat(QWebEngineDownloadItem::SavePageFormat());
	download->accept();
	connect(download, SIGNAL(downloadProgress(qint64, qint64)), this, SLOT(setCurrentProgress(qint64, qint64)));
}

void Boogle::openNewTab(int index)
{
	createWindows();
	m_tabs->setCurrentIndex(index);
}


