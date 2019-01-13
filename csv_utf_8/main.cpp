#include "csv_utf_8.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	csv_utf_8 w;
	w.show();
	return a.exec();
}
