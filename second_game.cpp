#include "second_game.h"

second_game::second_game(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setFixedSize(480,800);
	this->setWindowIcon(QIcon(":/second_game/Resources/2048.png"));
	this->setWindowTitle("2048");

	//设置菜单栏的关闭
	connect(ui.actionclose, &QAction::triggered, [=]() {
		this->close();
		});
	
	play* playScreen = new play;
	playScreen->show();
	this->close();
}


