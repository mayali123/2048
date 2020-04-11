#pragma once
#ifdef WIN32  
#pragma execution_character_set("utf-8")  
#endif

#include <QWidget>
#include<QAction>
#include<QPixmap>
#include<QPainter>
#include"MyNumber.h"
#include<cstdio>
#include<ctime>
#include<QDebug>
#include <cstdlib>
#include<QKeyEvent>
class play : public QWidget
{
	Q_OBJECT

public:
	play();
	
	void paintEvent(QPaintEvent* event);
	void MyRand();
	void load();						//加载图片
	void close();						//删除图片
	void keyPressEvent(QKeyEvent* event);
	~play();
	//int k, i, j;						//k保存数值，i保存x,j保存y坐标
};
