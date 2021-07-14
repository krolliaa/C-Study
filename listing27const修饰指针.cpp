#include <iostream>
using namespace std;

int main27()
{
	int a = 10;
	int b = 10;

	//const修饰的是指针，指针指向可以改，指针指向的值不可以改
	const int * p1 = &a;
	p1 = &b;
	//*p1 = 100;报错
	cout << *p1 << endl;

	//const既修饰的是常量，指针指向不可改，指针指向的值可以改
	int * const p2 = &a;
	*p2 = 100;
	//p2 = &b;报错
	cout << *p2 << endl;

	//const既修饰指针又修饰常量
	const int * const p3 = &a;

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int * p = arr;  //指向数组的指针

	cout << "第一个元素： " << arr[0] << endl;
	cout << "指针访问第一个元素： " << *p << endl;

	for (int i = 0; i < 10; i++)
	{
		//利用指针遍历数组
		cout << *p << endl;
		p++;
	}

	system("pause");
	return 0;
}