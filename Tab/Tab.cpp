#include "Tab.h"
#include "WebEngineView.h"

Tab::Tab(QWidget* parent)
	: QWidget(parent)
{


	m_adressBar = new QLineEdit;
	m_adressBar->setPlaceholderText("Barre de recherche");
	m_previousButton = new QButtons();
	m_previousButton->setIcon(QIcon(":/Boogle/images/arrow-left.png"));
	m_previousButton->setToolTip("Precedent");

	m_nextButton = new QButtons();
	m_nextButton->setIcon(QIcon(":/Boogle/images/arrow-right.png"));
	m_nextButton->setToolTip("Suivant");
	m_refreshButton = new QButtons();
	m_refreshButton->setIcon(QIcon(":/Boogle/images/reload.png"));
	m_refreshButton->setToolTip("Recharger (F5)");
	m_refreshButton->setShortcut(QKeySequence("F5"));
	m_newTabButton = new QButtons();
	m_newTabButton->setIcon(QIcon(":/Boogle/images/new-window.png"));
	m_newTabButton->setToolTip("Nouvel onglet (ctrl+t)");
	m_newTabButton->setShortcut(QKeySequence("ctrl+t"));
	m_enterButton = new QButtons();
	m_enterButton->setShortcut(QKeySequence("ENTER"));
	m_enterButton->setToolTip("Entrer");
	m_enterButton->setIcon(QIcon(":/Boogle/images/search.png"));
	m_homeButton = new QButtons();
	m_homeButton->setIcon(QIcon(":/Boogle/images/home.png"));
	m_homeButton->setToolTip("Accueil");
	m_closeButton = new QButtons();
	m_closeButton->setIcon(QIcon(":/Boogle/images/stop.png"));
	m_closeButton->setToolTip("Arreter le chargement");



	m_history = new QButtons();
	m_history->setIcon(QIcon(":/Boogle/images/history.png"));
	m_history->setToolTip("Consulter l'historique");


	
	m_deleteHistory = new QButtons();
	m_deleteHistory->setIcon(QIcon(":/Boogle/images/edit-delete.png"));
	m_deleteHistory->setToolTip("Supprimer l'historique");





	m_findText = new QLineEdit();
	m_findText->setFixedWidth(220);
	m_findText->setPlaceholderText("Recherchez un mot-cle");
	m_findText->setToolTip("Raccourci F6");
	m_adressBar->setStyleSheet("background-image:url()");
	m_view = new WebEngineView();
	
	//m_view->triggerPageAction(QWebEnginePage::Stop);

	addButtonsToLayout();
}

Tab::~Tab()
{
}

void Tab::addButtonsToLayout()
{
	QVBoxLayout* mainLayout = new QVBoxLayout;
	QHBoxLayout* subLayout = new QHBoxLayout;
	subLayout->addWidget(m_previousButton);
	subLayout->addWidget(m_nextButton);
	subLayout->addWidget(m_refreshButton);
	subLayout->addWidget(m_newTabButton);
	subLayout->addWidget(m_homeButton);
	subLayout->addWidget(m_closeButton);
	subLayout->addWidget(m_enterButton);
	subLayout->addWidget(m_adressBar);
	subLayout->addWidget(m_findText);
	subLayout->addWidget(m_history);
	subLayout->addWidget(m_deleteHistory);
	mainLayout->addLayout(subLayout);
	mainLayout->addWidget(m_view);
	this->setLayout(mainLayout);
}

void Tab::setUrl(QString* url)
{
	m_view->load(QUrl(*url));

}

WebEngineView* Tab::getView()
{
	return m_view;
}
