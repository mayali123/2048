#include "MyNumber.h"

MyNumber::MyNumber(int number)
{
	QPixmap pix;
	bool bl = pix.load(QString(":/second_game/Resources/%1.png").arg(number));
	if (!bl)
		return;
	//���ÿ�Ĵ�С
	this->setFixedSize(pix.width(),pix.height());
	//���ò�����ͼƬ����ʽ������ȥͼƬ�ı߿�
	this->setStyleSheet("QPushButton{border:0px;}");
	//����ͼƬ
	this->setIcon(QIcon(pix));
	//����ͼƬ�Ĵ�С
	this->setIconSize(QSize(pix.width(), pix.height()));
	//���ò��۽��ڰ�����
	this->setFocusPolicy(Qt::NoFocus);
}

MyNumber::~MyNumber()
{
}
