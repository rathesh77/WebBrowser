#include "ProgressBar.h"

ProgressBar::ProgressBar(QWidget* parent)
	: QProgressBar(parent)
{
	setFixedWidth(180);
}

ProgressBar::~ProgressBar()
{
}
