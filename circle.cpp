#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"
	void circle::setR(int r)
	{
		R = r;
	}
	void circle::setO(point o)
	{
		O = o;
	}
	int circle::getR()
	{
		return R;
	}
	point circle::getO()
	{
		return O;
	}