#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
//函数默认参数
int func(int a, int b, int c)
{
	return a + b + c;
}
int main()
{
	cout<<func(10, 20, 30)<<endl;
	system("pause");
	return 0;
}