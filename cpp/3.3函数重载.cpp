#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
//��������
//�����ú�������ͬ����߸�����

//�������ص���������
//1.ͬһ����������
//2.����������ͬ
//3.�����������Ͳ�ͬ���߸�����ͬ������˳��ͬ
void func()
{
	cout<<"func�ĵ���"<<endl;
}
void func(int a)
{
	cout << "func(int a)�ĵ���!" << endl;
}
void func(double a)
{
	cout << "func(double a)�ĵ���!" << endl;
}
//�����ķ���ֵ��������Ϊ���غ���������
int main0303()
{
	func();
	func(10);
	func(3.1);
	system("pause");
	return 0;
}