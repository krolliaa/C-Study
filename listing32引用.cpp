#include <iostream>
#include <string>
using namespace std;

int main32()
{
	int a = 10;
	int &b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//���ñ����ʼ��
	int &c = a;
	//�����ڳ�ʼ���󣬲����Ըı䣬���Խ��и�ֵ����
	c = b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;


	system("pause");
	return 0;
}