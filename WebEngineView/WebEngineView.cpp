#include "WebEngineView.h"
#include <qfile.h>


WebEngineView::WebEngineView()
{
	load(QUrl("https://google.fr"));
	show();

}


WebEngineView::~WebEngineView()
{
}

