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

	//引用必须初始化
	int &c = a;
	//引用在初始化后，不可以改变，可以进行赋值操作
	c = b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;


	system("pause");
	return 0;
}