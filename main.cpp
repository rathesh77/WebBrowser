#include "Boogle.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
	qputenv("QTWEBENGINE_REMOTE_DEBUGGING", "9000");

	QApplication a(argc, argv);
	Boogle w;
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	QApplication::setFont(QFont("arial", 12));
	w.show();
	return a.exec();
}