#include "QButtons.h"

QButtons::QButtons(QWidget* parent)
	: QPushButton(parent)
{
	setFixedWidth(35);
	setStyleSheet("border:none;background: transparent;");
}

QButtons::~QButtons()
{
}
