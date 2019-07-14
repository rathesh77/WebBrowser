#include "QdockWidget.h"

QdockWidget::QdockWidget(QWidget* parent)
	: QDockWidget(parent)
{
	//setFeatures(DockWidgetMovable);
	QLabel* m_dockTitleWidget = new QLabel;
	setStyleSheet("background-image:url();background-color:white");
	setTitleBarWidget(m_dockTitleWidget);
}



QdockWidget::~QdockWidget()
{
}
