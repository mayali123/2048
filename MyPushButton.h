#pragma once

#include <QPushButton>

class MyPushButton : public QPushButton
{
	Q_OBJECT

public:
	MyPushButton(QString normalImg, QString pressImg = "");	//��д���캯��
	~MyPushButton();
	QString normalImgPath;									//Ĭ����ʾͼƬ·��
	QString pressedImgPath;									 //���º���ʾͼƬ·��

};
