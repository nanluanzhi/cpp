#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
//圆周率
const double PI = 3.14;
//设计一个圆类，求圆的周长
//圆求周长的公式：2*pi*半径

//class代表设计一个类，类后面紧跟着的就是类名称
class Circle
{
	//访问权限
	//公共权限
public:

	//属性
	//半径
	int m_r;

	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main040101()
{
	//通过圆类 创建具体的圆（对象）
	//实例化 (通过一个类 创建一个对象的过程)
	Circle cl;
	//给圆对象的属性进行赋值
	cl.m_r = 10;
	cout << "圆的周长为：" << cl.calculateZC() << endl;
	system("pause");
	return 0;
}