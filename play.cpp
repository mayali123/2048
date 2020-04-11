#include "play.h"

int a[5][4] = {0};						//����ֵ�����飬����ʼ��
MyNumber* anum[5][4];					//�������ֵĵ�ַ
play::play()
{
	srand((int)time(NULL));  // ����������� 

	this->setFixedSize(512, 800);
	this->setWindowIcon(QIcon(":/second_game/Resources/2048.png"));
	this->setWindowTitle("2048");
	
	//��ʾͼƬ
	update();
	for(int i=0;i<5;i++)
		MyRand();
	int i, j;
	
}

play::~play()
{
}
void play::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
	QPixmap pix1;
	//2048�ı�־
	pix1.load(":/second_game/Resources/2048.png");
	painter.drawPixmap(this->width()*0.08,this->height()*0.04,pix1);
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
		{
			QPixmap pix;
			pix.load(":/second_game/Resources/0.png");
			painter.drawPixmap(20 + i * 118, 160 + j * 119, pix);
		}
}

void play::MyRand()
{
	int i, j,k;
	//����1~4��������Ϊż��
	while ((k = rand() % 4 + 1) % 2 != 0);
	do
	{ 
		//����0~3����
		j = rand() % 4;
		//����0~4����
		i = rand() % 5;
	}
	while (a[i][j]!=0);
	a[i][j] = k;
	/*anum[j][i] = new MyNumber(k);
	anum[j][i]->setParent(this);
	anum[j][i]->move(20 + i * 118, 160 + j * 119);*/
	//load();
}


void play::load()
{
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<4;j++)
		{ 
			if(a[i][j]!=0)
			{ 
				anum[i][j] = new MyNumber(a[i][j]);
				anum[i][j]->setParent(this);
				anum[i][j]->move(20 + j * 118, 160 + i * 119);
			}
		}
	qDebug() << "���سɹ�";
}
void play::keyPressEvent(QKeyEvent* event)
{
	//close();//�ر���������ͼƬ
	qDebug() <<"close";
	qDebug() << event->key();
	switch (event->key())//Qt::Key_Left Qt::Key_Up	Qt::Key_Right	Qt::Key_Down
	{
	case Qt::Key_Left:
		int i, j, k = 0, b[5][4] = { 0 };
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 4; j++)
			{
				if (a[i][j] != 0)
					b[i][k++] = a[i][j];
			}
			k = 0;
		}
		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 4; j++)
			{
				a[i][j] = b[i][j]; 
				qDebug() << QString("a[%1][%2]=%3").arg(i).arg(j).arg(a[i][j]);
			}
		break;
	/*default:
		break;*/
	}
}

void play::close()
{
	int i, j;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 4; j++)
		{ 
			qDebug()<< QString("a[%1][%2]=%3").arg(i).arg(j).arg(a[i][j]);
			/*if (a[i][j])
			{ 
				anum[i][j]->close();
				qDebug() << i << " " << j;
				a[i][j] = 0;				//�������0������û������
			}*/
		}
}