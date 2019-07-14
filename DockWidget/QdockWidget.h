#pragma once

#include <QDockWidget>
#include <QtWidgets>
class QdockWidget : public QDockWidget
{
	Q_OBJECT

public:
	QdockWidget(QWidget* parent);
	~QdockWidget();
private:
	QLabel* m_dockTitleWidget;

};
