#pragma once

#include <QTabWidget>
#include "Tab.h"
#include "WebEngineView.h"

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
	void openHistory();
	void clearHistory();
	void updateHistory();

signals:
	void enterButtonPressed();

public:
	TabWidget(QWidget* parent);
	~TabWidget();
	WebEngineView* getView();
	WebEngineView* currentWebPage();
	QWidget* createTab(const QString url);
	void keyPressEvent(QKeyEvent* event);
	void mousePressEvent(QMouseEvent* event);
	Tab* getTab();
private:
	Tab* m_tab;
	QWidget* fenetreHistorique;
	QTextEdit* txt;
	QFile* file;
	QTextStream* out;

};