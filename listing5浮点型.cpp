#include <iostream>
using namespace std;

int main5()
{
	float f1 = 3.14f;
	double d1 = 3.14;

	cout << f1 << endl;
	cout << d1 << endl;

	cout << "float sizeof = " << sizeof(f1) << " 字节" << endl;
	cout << "float sizeof = " << sizeof(d1) << " 字节" << endl;

	// 科学计数法
	float f2 = 3e2;
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;
	cout << "f3 = " << f3 << endl;

	system("pause");
	return 0;
}