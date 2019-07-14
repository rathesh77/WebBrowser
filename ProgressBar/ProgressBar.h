#pragma once

#include <QProgressBar>

class ProgressBar : public QProgressBar
{
	Q_OBJECT

public:
	ProgressBar(QWidget* parent);
	~ProgressBar();
};
