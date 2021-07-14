#include <iostream>
using namespace std;

int main15()
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = a > b ? a : b; //相当于 c = b (20)
	cout << "c = " << c << endl;

	//C++三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 100; //相当于 b = 100
	cout << "a = " << a << endl; // a = 10;
	cout << "b = " << b << endl; // b = 100;
	cout << "c = " << c << endl; // c = 20;

	system("pause");
	return 0;
}