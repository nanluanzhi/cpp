#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
//�����������ķ���ֵ
//1.��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;//�ֲ���������������е�ջ��
	return a;
}
//2.�����ĵ��ÿ�����Ϊ��ֵ
int main0204()
{
	int &ref = test01();
	cout << "ref=" << ref << endl;
	system("pause");
	return 0;
}