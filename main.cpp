#include "second_game.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	second_game w;
	w.show();
	return a.exec();
}
