#pragma once
#include<iostream>
using namespace std;
class point
{
public:
	void setx(int x);//只需要声明  
	void sety(int y);
	int getX();
	int getY();
private:
	//x坐标
	int X;
	//y坐标
	int Y;
};