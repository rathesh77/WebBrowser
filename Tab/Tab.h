#ifndef HEADER_TAB
#define HEADER_TAB
#pragma once

#include <QWidget>
#include <QtWebEngineWidgets>
#include <QtWidgets>
#include "QButtons.h"
#include "QdockWidget.h"

class Tab : public QWidget
{
	Q_OBJECT

public:
	Tab(QWidget* parent);
	~Tab();
	void addButtonsToLayout();
	void setUrl(QString* url);
	QWebEngineView* m_view;
	QButtons* m_previousButton;
	QButtons* m_nextButton;
	QButtons* m_refreshButton;
	QButtons* m_homeButton;
	QButtons* m_enterButton;
	QButtons* m_newTabButton;
	QButtons* m_closeButton;
	QLineEdit* m_adressBar;
	QLineEdit* m_findText;
	QWebEngineView* getView();


};
#endif

