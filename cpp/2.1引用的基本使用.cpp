#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
int main0201()
{
	//���û����﷨
	//�������� &����=ԭ��
	int a = 10;
	//��������
	int& b = a;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	b = 100;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	system("pause");
	return 0;
}