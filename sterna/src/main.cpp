#include <QApplication>
#include "sterna.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	sterna w;
	w.showMaximized();
	w.createDockWindows();
	a.connect(&a, SIGNAL(lastWindowClosed()), &a, SLOT(quit()));
	return a.exec();
}

	
