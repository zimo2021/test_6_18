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
	//�뾶
	int R;
	//Բ��
	point O;//����ʹ����һ����
};