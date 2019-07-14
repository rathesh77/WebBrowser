#include "TabWidget.h"
#include <QtWidgets\QtWidgets>
#include <QtWebEngineWidgets\QtWebEngineWidgets>

TabWidget::TabWidget(QWidget* parent)
	: QTabWidget(parent)
{

	setTabShape(QTabWidget::Triangular);
	setMovable(true);
	setTabsClosable(true);
	setStyleSheet("border:none;");
	tabBar()->setStyleSheet("background-image:url()");
	addTab(createTab("https://google.fr"), "Doosearch > Rechercher");
	connect(this, SIGNAL(tabCloseRequested(int)), this, SLOT(closeCurrentTab(int)));

}

TabWidget::~TabWidget()
{
}

QWebEngineView* TabWidget::getView()
{
	return m_tab->findChild<QWebEngineView*>();
}

QWebEngineView* TabWidget::currentWebPage()
{
	return currentWidget()->findChild<QWebEngineView*>();
}


void TabWidget::refreshWebPage()
{
	currentWebPage()->reload();
	//currentWebPage()->page()->save("C:/Users/Administrateur/Downloads", QWebEngineDownloadItem::CompleteHtmlSaveFormat );
}

void TabWidget::previousWebPage()
{
	currentWebPage()->back();
}
void TabWidget::nextWebPage()
{
	currentWebPage()->forward();
}

void TabWidget::stopReload()
{
	currentWebPage()->stop();

}

void TabWidget::homeWebPage()
{
	if (currentIndex() >= 0) {
		currentWebPage()->load(QUrl("https://google.fr"));
		setTabText(currentIndex(), "Doosearch > Rechercher");
	}
}
void TabWidget::newTab()
{
	int tabCurrentIndex = addTab(createTab("https://google.fr"), "Google");
	setCurrentIndex(tabCurrentIndex);
}


void TabWidget::closeCurrentTab(int index)
{
	if ( count()>1)
	{ 
		setCurrentIndex(index);
		delete currentWebPage();
		removeTab(index);
}
	
}

void TabWidget::changeUrl(const QUrl& url)
{
	currentWidget()->findChild<QLineEdit*>()->setText(url.toString());
}

void TabWidget::changeTitle(const QString& title)
{
	setTabText(currentIndex(), title);
}


void TabWidget::changeTabTitle(int index)
{
	m_tab->m_adressBar->setText(currentWebPage()->url().toString());
}

Tab* TabWidget::getTab()
{
	return m_tab;
}

void TabWidget::mousePressEvent(QMouseEvent* event)
{
	switch (event->button())
	{
	case Qt::BackButton:
		currentWebPage()->back();
		break;
	case Qt::ForwardButton:
		currentWebPage()->forward();
		break;
	}
}

void TabWidget::newSearch()
{
	QString urlAdress = this->currentWidget()->findChild<QLineEdit*>()->text();

	if (!urlAdress.isEmpty()) {

		if (urlAdress.contains("https://") == true || urlAdress.contains("http://") == true) {
			currentWebPage()->load(QUrl(urlAdress));
		}

		else {
			currentWebPage()->load(QUrl("https://www.google.fr/search?q=" + urlAdress));
		}
	}
}

QWidget* TabWidget::createTab(const QString url)
{
	m_tab = new Tab(this);

	// ------------ Signals and slots for buttons -----------
	connect(m_tab->m_enterButton, SIGNAL(clicked()), this, SLOT(newSearch()));
	connect(m_tab->m_homeButton, SIGNAL(clicked()), this, SLOT(homeWebPage()));
	connect(m_tab->m_refreshButton, SIGNAL(clicked()), this, SLOT(refreshWebPage()));
	connect(m_tab->m_closeButton, SIGNAL(clicked()), this, SLOT(stopReload()));
	connect(m_tab->m_newTabButton, SIGNAL(clicked()), this, SLOT(newTab()));
	connect(m_tab->m_previousButton, SIGNAL(clicked()), this, SLOT(previousWebPage()));
	connect(m_tab->m_nextButton, SIGNAL(clicked()), this, SLOT(nextWebPage()));
	connect(m_tab->m_view, SIGNAL(urlChanged(QUrl)), this, SLOT(changeUrl(QUrl)));
	connect(m_tab->m_view, SIGNAL(titleChanged(QString)), this, SLOT(changeTitle(QString)));
	connect(m_tab->m_view, SIGNAL(loadProgress(int)), this, SLOT(loading(int)));
	connect(this, SIGNAL(currentChanged(int)), this, SLOT(changeTabTitle(int)));
	m_tab->m_findText->setStyleSheet("background-image:url()");

	// -----------------
	return m_tab;
}


void TabWidget::keyPressEvent(QKeyEvent * event)
{
	switch (event->key()) {
	case Qt::Key_Enter:
	{
		emit enterButtonPressed();
	} break;
	case Qt::Key_F6:
	{
		currentWebPage()->page()->findText(/*m_tab->m_findText->text()*/ m_tab->m_findText->text(), QWebEnginePage::FindCaseSensitively);
	} break;
	case Qt::Key_F7:
	{
		QString url = "view-source:" + m_tab->m_adressBar->text();
		if (currentWebPage()->url().toString().contains("view-source:"))
			return;
		int currentIndex = addTab(createTab("view-source:" + m_tab->m_adressBar->text()), "view-source:" + m_tab->m_adressBar->text());
		m_tab->setUrl(&url);
		setCurrentIndex(currentIndex);
	} break;
	case Qt::Key_Control + Qt::Key_Tab:
	{
		setCurrentIndex(currentIndex() + 1);
	}
	}
}