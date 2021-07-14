#include <iostream>
using namespace std;

int main11()
{
	//简单加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl; 报错，除数不可以为0

	//两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;

	// 取模
	int m1 = 10;
	int n1 = 3;
	cout << m1 % n1 << endl;


	int m2 = 10;
	int n2 = 20;
	cout << m2 % n2 << endl;

	int m3 = 10;
	int n3 = 0;
	//cout << m3 % n3 << endl;
	//取模运算时，除数不能为0

	double m4 = 3.14;
	double n4 = 1.1;
	//cout << m4 % n4 << endl;
	//两个小数不可以取模

	//后置递增
	int a = 10;
	a++; //等价于 a = a + 1;
	cout << a << endl;

	//前置递增
	int b = 10;
	++b;
	cout << b << endl;

	//计算后赋值
	int k1 = 10;
	int k2 = ++k1 * 10;
	cout << k2 << endl; //110

	//计算前赋值
	int k3 = 10;
	int k4 = k3++ * 10;
	cout << k4 << endl; //100

	//赋值运算符
	int w = 10;
	cout << "w = " << w << endl;

	w += 2;
	cout << "w = " << w << endl;

	w -= 2;
	cout << "w = " << w << endl;

	w *= 2;
	cout << "w = " << w << endl;

	w /= 2;
	cout << "w = " << w << endl;

	w %= 2;
	cout << "w = " << w << endl;

	int w1 = 10;
	int w2 = 20;

	cout << (w1 == w2) << endl;
	cout << (w1 != w2) << endl;
	cout << (w1 < w2) << endl;
	cout << (w1 > w2) << endl;
	cout << (w1 <= w2) << endl;
	cout << (w1 >= w2) << endl;
	cout << !w1 << endl;
	cout << !!w1 << endl;

	system("pause");
	return 0;
}