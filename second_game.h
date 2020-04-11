#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_second_game.h"
#include"play.h"
#include<QAction>
#include<QPixmap>
#include<QPainter>
class second_game : public QMainWindow
{
	Q_OBJECT

public:
	second_game(QWidget *parent = Q_NULLPTR);
private:
	Ui::second_gameClass ui;
};
