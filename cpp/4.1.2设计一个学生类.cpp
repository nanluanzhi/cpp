#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
class student
{
public:
	//���е����Ժ���Ϊ ����ͳһ��Ϊ��Ա
	//���� ��Ա���� ��Ա����
	//��Ϊ ��Ա���� ��Ա����
	string name;
	int num;
	void show()
	{
		cout << "���������ֵ��";
		cin >> name;
		cout << "���ѧ�Ÿ�ֵ��";
		cin >> num;
		cout << "������" << name << endl << "ѧ�ţ�" << num << endl;
	}
};
int main()
{
	student stu;
	stu.show();
	system("pause");
	return 0;
}