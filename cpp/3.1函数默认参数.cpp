#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
//����Ĭ�ϲ���
int func(int a, int b=20, int c=30)
{
	return a + b + c;
}
int main()
{
	cout<<func(10,30)<<endl;
	system("pause");
	return 0;
}