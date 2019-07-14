#pragma once

#include <QPushButton>

class QButtons : public QPushButton
{
	Q_OBJECT

public:
	QButtons(QWidget* parent = 0);
	~QButtons();
};
