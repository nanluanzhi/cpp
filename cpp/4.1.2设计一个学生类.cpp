#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
class student
{
public:
	//类中的属性和行为 我们统一称为成员
	//属性 成员属性 成员变量
	//行为 成员函数 成员方法
	string name;
	int num;
	void show()
	{
		cout << "请给姓名赋值：";
		cin >> name;
		cout << "请给学号赋值：";
		cin >> num;
		cout << "姓名：" << name << endl << "学号：" << num << endl;
	}
};
int main()
{
	student stu;
	stu.show();
	system("pause");
	return 0;
}