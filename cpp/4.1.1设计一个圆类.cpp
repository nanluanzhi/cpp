#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
//Բ����
const double PI = 3.14;
//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ��2*pi*�뾶

//class�������һ���࣬���������ŵľ���������
class Circle
{
	//����Ȩ��
	//����Ȩ��
public:

	//����
	//�뾶
	int m_r;

	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main040101()
{
	//ͨ��Բ�� ���������Բ������
	//ʵ���� (ͨ��һ���� ����һ������Ĺ���)
	Circle cl;
	//��Բ��������Խ��и�ֵ
	cl.m_r = 10;
	cout << "Բ���ܳ�Ϊ��" << cl.calculateZC() << endl;
	system("pause");
	return 0;
}