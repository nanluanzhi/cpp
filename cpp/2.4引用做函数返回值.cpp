#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
//引用做函数的返回值
//1.不要返回局部变量的引用
int& test01()
{
	int a = 10;//局部变量存放在四区中的栈区
	return a;
}
//2.函数的调用可以作为左值
int main0204()
{
	int &ref = test01();
	cout << "ref=" << ref << endl;
	system("pause");
	return 0;
}