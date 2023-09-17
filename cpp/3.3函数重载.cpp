#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
//函数重载
//可以让函数名相同，提高复用性

//函数重载的满足条件
//1.同一个作用域下
//2.函数名称相同
//3.函数参数类型不同或者个数不同，或者顺序不同
void func()
{
	cout<<"func的调用"<<endl;
}
void func(int a)
{
	cout << "func(int a)的调用!" << endl;
}
void func(double a)
{
	cout << "func(double a)的调用!" << endl;
}
//函数的返回值不可以作为重载函数的条件
int main0303()
{
	func();
	func(10);
	func(3.1);
	system("pause");
	return 0;
}