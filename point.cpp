#include<iostream>
using namespace std;
#include"point.h"
	void point::setx(int x)//只需要实现  其中point::就是作用域
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