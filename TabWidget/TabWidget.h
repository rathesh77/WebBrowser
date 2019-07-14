#pragma once

#include <QTabWidget>
#include "Tab.h"

class TabWidget : public QTabWidget
{
	Q_OBJECT

public slots:
	void newSearch();
	void refreshWebPage();
	void previousWebPage();
	void nextWebPage();
	void stopReload();
	void homeWebPage();
	void closeCurrentTab(int index);
	void changeUrl(const QUrl& url);
	void changeTitle(const QString& title);
	void changeTabTitle(int index);
	void newTab();

signals:
	void enterButtonPressed();

public:
	TabWidget(QWidget* parent);
	~TabWidget();
	QWebEngineView* getView();
	QWebEngineView* currentWebPage();
	QWidget* createTab(const QString url);
	void keyPressEvent(QKeyEvent* event);
	void mousePressEvent(QMouseEvent* event);
	Tab* getTab();
private:
	Tab* m_tab;

};