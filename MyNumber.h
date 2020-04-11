#pragma once

#include <QPushButton>
#include<QPixmap>
#include<QPainter>
class MyNumber : public QPushButton
{
	Q_OBJECT

public:
	MyNumber(int number);
	~MyNumber();
	int x, y;
};
