#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
int main0202()
{
	int a = 10;
	
	//1.引用必须初始化
	//int& b;//错误，引用必须初始化
	int & b = a;
	//2.引用在初始化后，不可以改变
	int c = 20;
	b = c;//这是赋值操作，不是更改引用
	cout<< "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}