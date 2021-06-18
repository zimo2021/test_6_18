#pragma once
#include<iostream>
#include"point.h"
using namespace std;
class circle
{
public:
	void setR(int r);
	void setO(point o);
	int getR();
	point getO();
private:
	//半径
	int R;
	//圆心
	point O;//可以使用另一个类
};