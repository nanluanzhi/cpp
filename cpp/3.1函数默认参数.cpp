#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
//����Ĭ�ϲ���
//��������Լ��������ݣ������Լ������ݣ����û�У���ô��Ĭ��ֵ
//�﷨������ֵ���� ���������β�=Ĭ��ֵ��{}
int func(int a, int b=20, int c=30)
{
	return a + b + c;
}

//ע������
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
//int func2(int a, int b = 10, int c, int d)
//{
//	return a + b + c;
//}

//2.�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��������һ����Ĭ�ϲ���
//int func2(int a=10, int b=10);
//int func2(int a = 10, int b = 10)
//{
//	return a + b;
//}
int main0301()
{
	cout<<func(10,30)<<endl;
	system("pause");
	return 0;
}