#include<iostream>
using namespace std;
#include"point.h"
	void point::setx(int x)//ֻ��Ҫʵ��  ����point::����������
	{
		X = x;
	}
	void point::sety(int y)
	{
		Y = y;
	}
	int point::getX()
	{
		return X;
	}
	int point::getY()
	{
		return Y;
	}