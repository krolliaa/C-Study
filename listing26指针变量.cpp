#include <iostream>
using namespace std;

int main26()
{
	//1、指针的定义：数据类型 * 变量名;
	int a = 10;
	int * p;

	//2、指针变量赋值，指针变量存放变量地址
	p = &a;
	cout << &a << endl;
	cout << p << endl;

	//3、指针的使用，指针也是数据类型，占用 4 个字节
	cout << "*p = " << *p << endl;

	cout << *p << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(char *) << endl;
	cout << sizeof(float *) << endl;
	cout << sizeof(double *) << endl;

	//空指针和野指针都不是我们申请的空间，因此不要访问

	int *q = NULL;
	//访问空指针报错
	//cout << *q << endl;

	int *k = (int *)0x1100;
	//访问野指针报错
	//cout << *k << endl;

	system("pause");
	return 0;
}