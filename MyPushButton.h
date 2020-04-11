#pragma once

#include <QPushButton>

class MyPushButton : public QPushButton
{
	Q_OBJECT

public:
	MyPushButton(QString normalImg, QString pressImg = "");	//重写构造函数
	~MyPushButton();
	QString normalImgPath;									//默认显示图片路径
	QString pressedImgPath;									 //按下后显示图片路径

};
