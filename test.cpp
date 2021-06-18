#include<iostream>
using namespace std;
//创建一个圆和一个点  判断圆和点的关系（圆内，圆上，圆外）
//class point
//{
//public:
//	void setx(int x)
//	{
//		X = x;
//	}
//	void sety(int y)
//	{
//		Y = y;
//	}
//	int getX()
//	{
//		return X;
//	}
//	int getY()
//	{
//		return Y;
//	}
//private:
//	//x坐标
//	int X;
//	//y坐标
//	int Y;
//};
//class circle
//{
//public:
//	void setR(int r)
//	{
//		R = r;
//	}
//	void setO(point o)
//	{
//		O = o;
//	}
//	int getR()
//	{
//		return R;
//	}
//	point getO()
//	{
//		return O;
//	}
//private:
//	//半径
//	int R;
//	//圆心
//	point O;//可以使用另一个类
//};
//#include"circle.h"
//#include"point.h"
//int main()
//{
//	//设置一个圆
//	circle c;
//	//设置圆的半径
//	c.setR(10);
//	//设置圆的圆心
//	point o;
//	o.setx(10);
//	o.sety(0);
//	c.setO(o);
//	//设置一个点
//	point o1;
//	o1.setx(9);
//	o1.sety(10);
//	int ret =
//		(o1.getX() - c.getO().getX())*(o1.getX() - c.getO().getX()) +
//		(o1.getY() - c.getO().getY())*(o1.getY() - c.getO().getY());
//	if (ret == (c.getR()*c.getR()))
//	{
//		cout << "点在圆上" << endl;
//	}
//	if (ret < (c.getR()*c.getR()))
//	{
//		cout << "点在圆内" << endl;
//	}
//	if (ret > (c.getR()*c.getR()))
//	{
//		cout << "点在圆外" << endl;
//	}
//	return 0;
//}
//但是如果类比较多的话，写在一个文件中不好，所以可以分文件编写
//构造函数和析构函数
//用于对函数的初始化和结束函数后的清理工作
//如果自己没有提供，编译器会自动调用系统自带的构造函数和析构函数（他们都是空实现）
//class stu
//{
//public:
//	stu()
//	{
//		cout << "这是构造函数" << endl;//会打印出来
//	}
//private:
//	int x;
//};
//int main()
//{
//	stu s;
//	return 0;
//}

//class stu
//{
//public:
//	stu()
//	{
//		cout << "这是构造函数" << endl;//程序开始时调用
//	}
//	~stu()
//	{
//		cout << "这是析构函数" << endl;//程序结束时调用
//	}
//private:
//	int x;
//};
//int main()
//{
//	system("pause");
//
//	stu s;//创建变量也是很重要的  否则就没有初始化和清理一说
//	system("pause");
//	return 0;
//}

//构造函数的分类及调用
//按参数可分为有参和无参（其中无参构造函数又称为默认构造函数）
//按类型可分为普通构造函数和拷贝构造函数
//class person
//{
//public:
//	person()
//	{
//		cout << "无参构造函数" << endl;
//	}
//	person(int x)
//	{
//		cout << "有参构造函数" << endl;
//	}
//	person(const person& p)
//	{
//		cout << "拷贝构造函数" << endl;
//	}
//	~person()
//	{
//		cout << "析构函数" << endl;
//	}
//private:
//	int age;
//};
//int main()
//{
	//person p;
	//无参构造（其后打印：无参构造函数 析构函数）
	//person p1(10);
	//有参构造（其后打印：有参构造函数 析构函数）
	//person p1(p1);
	//拷贝构造（其后打印：拷贝构造函数 析构函数）
	//对于一些有参构造函数的其他调用方法
	//1.括号法
	//person p1(10);
	//2.显式法
	//person p = person(10);//相当于person p(10);
	//person p1 = person(p);//相当于person p1(p);
	//3.隐式转换法
	//person p = 10;//相当于person p(10);
	//person p1 = p;//相当于person p1(p);
	//三种方法自由转换
//	return 0;
//}
//拷贝函数的调用时机

//通常有下面三种情况
/*
1.使用一个已经创建完毕的对象来初始化一个新对象
2.以值传递的方式来给函数参数传值
3.以值方式返回局部变量
*/
class person
{
public:
	person()
	{
		cout << "默认构造函数" << endl;
	}
	person(int x)
	{
		cout << "值传递构造函数" << endl;
		age = x;
	}
	person(const person& p)
	{
		cout << "拷贝构造函数" << endl;
		age = p.age;//相当于在此做一个数据拷贝
	}
	~person()
	{
		cout << "析构函数" << endl;
	}
	int age;
};
//void test1()
//{
//	//1.使用一个已经创建完毕的对象来初始化一个新对象
//
//	person p(10);//"值传递构造函数"
//	person p1(p);//"拷贝构造函数"
//	cout << p1.age << endl;//10  数据以拷贝
//}
//void dowork(person p)
//{
//	cout << (int)&p << endl; //3995288
//
//}
//void test2()
//{
//	//2.以值传递的方式来给函数参数传值
//	person p;
//	dowork(p);//在传值的过程中调用了拷贝构造函数来复制p在将p传到dowork中的p 上面的P只是下面p的拷贝 没什么练习
//	cout << (int)&p << endl; //3995520  与上p地址不同
//	//打印结果：
//	/*
//	默认构造函数
//	拷贝构造函数
//	析构函数
//	析构函数
//	*/
//}
//person dowork2()
//{
//	person p;
//	cout << (int)&p << endl;//5240516
//	return p;//将P拷贝一份返回给dowork2()
//}
//void test3()
//{
//	person p = dowork2();
//	cout << (int)&p << endl;//5240764 与上p地址不同  说明是拷贝
//
	//输出如下
	/*
	默认构造函数
	拷贝构造函数
	析构函数
	析构函数
	*/

//}
//int main()
//{
//	/*test1();*/
//	/*test2();*/
//	test3();
//	return 0;
//}
//构造函数的调用规则
/*
默认情况下，在一个类中  编译器至少给我们提供三个函数
1.默认构造函数
2.析构函数
3.拷贝构造函数
如果用户提供了有参构造函数，则编译器不提供默认无参构造函数，但仍提供默认拷贝构造函数
如果用户提供了拷贝构造函数，则编译器不提供其他构造函数
*/





