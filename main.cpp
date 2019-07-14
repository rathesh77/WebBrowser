#include "Boogle.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	Boogle w;
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	QApplication::setFont(QFont("arial", 12));
	w.show();
	return a.exec();
}