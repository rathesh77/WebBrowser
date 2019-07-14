#ifndef HEADER_BOOGLE
#define HEADER_BOOGLE
#pragma once

#include <QMainWindow>
#include "ui_Boogle.h"
#include <QtWebEngineWidgets>
#include "QButtons.h"
#include "QtoolBar.h"
#include "QdockWidget.h"
#include "ProgressBar.h"
#include "Tab.h"
#include "TabWidget.h"

class Boogle : public QMainWindow
{
	Q_OBJECT

public:
	Boogle(QWidget* parent = Q_NULLPTR);
	void createWindows();
	void settings();

private:
	Ui::BoogleClass ui;
	TabWidget* m_tabs;
	QdockWidget* m_dock;
	QVector<QdockWidget*>m_listDocks;

public slots:

	void downloadItem(QWebEngineDownloadItem* download);
	void openNewTab(int index);


};

#endif