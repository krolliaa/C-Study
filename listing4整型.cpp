#include <iostream>
using namespace std;

int main4()
{
	// sizeof 统计数据类型所占内存大小
	// 2 4 4 8
	// short < int == long < long long
	cout << "short 类型所占内存空间为： " << sizeof(short) << " 字节" << endl;
	cout << "int 类型所占内存空间为： " << sizeof(int) << " 字节" << endl;
	cout << "long 类型所占内存空间为： " << sizeof(long) << " 字节" << endl;
	cout << "long long 类型所占内存空间为： " << sizeof(long long) << " 字节" << endl;
	system("pause");
	return 0;
}