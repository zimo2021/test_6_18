#include<iostream>
using namespace std;
//����һ��Բ��һ����  �ж�Բ�͵�Ĺ�ϵ��Բ�ڣ�Բ�ϣ�Բ�⣩
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
//	//x����
//	int X;
//	//y����
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
//	//�뾶
//	int R;
//	//Բ��
//	point O;//����ʹ����һ����
//};
//#include"circle.h"
//#include"point.h"
//int main()
//{
//	//����һ��Բ
//	circle c;
//	//����Բ�İ뾶
//	c.setR(10);
//	//����Բ��Բ��
//	point o;
//	o.setx(10);
//	o.sety(0);
//	c.setO(o);
//	//����һ����
//	point o1;
//	o1.setx(9);
//	o1.sety(10);
//	int ret =
//		(o1.getX() - c.getO().getX())*(o1.getX() - c.getO().getX()) +
//		(o1.getY() - c.getO().getY())*(o1.getY() - c.getO().getY());
//	if (ret == (c.getR()*c.getR()))
//	{
//		cout << "����Բ��" << endl;
//	}
//	if (ret < (c.getR()*c.getR()))
//	{
//		cout << "����Բ��" << endl;
//	}
//	if (ret > (c.getR()*c.getR()))
//	{
//		cout << "����Բ��" << endl;
//	}
//	return 0;
//}
//���������Ƚ϶�Ļ���д��һ���ļ��в��ã����Կ��Է��ļ���д
//���캯������������
//���ڶԺ����ĳ�ʼ���ͽ����������������
//����Լ�û���ṩ�����������Զ�����ϵͳ�Դ��Ĺ��캯�����������������Ƕ��ǿ�ʵ�֣�
//class stu
//{
//public:
//	stu()
//	{
//		cout << "���ǹ��캯��" << endl;//���ӡ����
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
//		cout << "���ǹ��캯��" << endl;//����ʼʱ����
//	}
//	~stu()
//	{
//		cout << "������������" << endl;//�������ʱ����
//	}
//private:
//	int x;
//};
//int main()
//{
//	system("pause");
//
//	stu s;//��������Ҳ�Ǻ���Ҫ��  �����û�г�ʼ��������һ˵
//	system("pause");
//	return 0;
//}

//���캯���ķ��༰����
//�������ɷ�Ϊ�вκ��޲Σ������޲ι��캯���ֳ�ΪĬ�Ϲ��캯����
//�����Ϳɷ�Ϊ��ͨ���캯���Ϳ������캯��
//class person
//{
//public:
//	person()
//	{
//		cout << "�޲ι��캯��" << endl;
//	}
//	person(int x)
//	{
//		cout << "�вι��캯��" << endl;
//	}
//	person(const person& p)
//	{
//		cout << "�������캯��" << endl;
//	}
//	~person()
//	{
//		cout << "��������" << endl;
//	}
//private:
//	int age;
//};
//int main()
//{
	//person p;
	//�޲ι��죨����ӡ���޲ι��캯�� ����������
	//person p1(10);
	//�вι��죨����ӡ���вι��캯�� ����������
	//person p1(p1);
	//�������죨����ӡ���������캯�� ����������
	//����һЩ�вι��캯�����������÷���
	//1.���ŷ�
	//person p1(10);
	//2.��ʽ��
	//person p = person(10);//�൱��person p(10);
	//person p1 = person(p);//�൱��person p1(p);
	//3.��ʽת����
	//person p = 10;//�൱��person p(10);
	//person p1 = p;//�൱��person p1(p);
	//���ַ�������ת��
//	return 0;
//}
//���������ĵ���ʱ��

//ͨ���������������
/*
1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
2.��ֵ���ݵķ�ʽ��������������ֵ
3.��ֵ��ʽ���ؾֲ�����
*/
class person
{
public:
	person()
	{
		cout << "Ĭ�Ϲ��캯��" << endl;
	}
	person(int x)
	{
		cout << "ֵ���ݹ��캯��" << endl;
		age = x;
	}
	person(const person& p)
	{
		cout << "�������캯��" << endl;
		age = p.age;//�൱���ڴ���һ�����ݿ���
	}
	~person()
	{
		cout << "��������" << endl;
	}
	int age;
};
//void test1()
//{
//	//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//
//	person p(10);//"ֵ���ݹ��캯��"
//	person p1(p);//"�������캯��"
//	cout << p1.age << endl;//10  �����Կ���
//}
//void dowork(person p)
//{
//	cout << (int)&p << endl; //3995288
//
//}
//void test2()
//{
//	//2.��ֵ���ݵķ�ʽ��������������ֵ
//	person p;
//	dowork(p);//�ڴ�ֵ�Ĺ����е����˿������캯��������p�ڽ�p����dowork�е�p �����Pֻ������p�Ŀ��� ûʲô��ϰ
//	cout << (int)&p << endl; //3995520  ����p��ַ��ͬ
//	//��ӡ�����
//	/*
//	Ĭ�Ϲ��캯��
//	�������캯��
//	��������
//	��������
//	*/
//}
//person dowork2()
//{
//	person p;
//	cout << (int)&p << endl;//5240516
//	return p;//��P����һ�ݷ��ظ�dowork2()
//}
//void test3()
//{
//	person p = dowork2();
//	cout << (int)&p << endl;//5240764 ����p��ַ��ͬ  ˵���ǿ���
//
	//�������
	/*
	Ĭ�Ϲ��캯��
	�������캯��
	��������
	��������
	*/

//}
//int main()
//{
//	/*test1();*/
//	/*test2();*/
//	test3();
//	return 0;
//}
//���캯���ĵ��ù���
/*
Ĭ������£���һ������  ���������ٸ������ṩ��������
1.Ĭ�Ϲ��캯��
2.��������
3.�������캯��
����û��ṩ���вι��캯��������������ṩĬ���޲ι��캯���������ṩĬ�Ͽ������캯��
����û��ṩ�˿������캯��������������ṩ�������캯��
*/





