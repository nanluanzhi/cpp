#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
int main0202()
{
	int a = 10;
	
	//1.���ñ����ʼ��
	//int& b;//�������ñ����ʼ��
	int & b = a;
	//2.�����ڳ�ʼ���󣬲����Ըı�
	int c = 20;
	b = c;//���Ǹ�ֵ���������Ǹ�������
	cout<< "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}