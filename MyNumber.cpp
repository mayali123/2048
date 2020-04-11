#include "MyNumber.h"

MyNumber::MyNumber(int number)
{
	QPixmap pix;
	bool bl = pix.load(QString(":/second_game/Resources/%1.png").arg(number));
	if (!bl)
		return;
	//设置框的大小
	this->setFixedSize(pix.width(),pix.height());
	//设置不规则图片的样式表，就是去图片的边框
	this->setStyleSheet("QPushButton{border:0px;}");
	//设置图片
	this->setIcon(QIcon(pix));
	//设置图片的大小
	this->setIconSize(QSize(pix.width(), pix.height()));
	//设置不聚焦在按键上
	this->setFocusPolicy(Qt::NoFocus);
}

MyNumber::~MyNumber()
{
}
