#include <iostream>
using namespace std;

int main4()
{
	// sizeof ͳ������������ռ�ڴ��С
	// 2 4 4 8
	// short < int == long < long long
	cout << "short ������ռ�ڴ�ռ�Ϊ�� " << sizeof(short) << " �ֽ�" << endl;
	cout << "int ������ռ�ڴ�ռ�Ϊ�� " << sizeof(int) << " �ֽ�" << endl;
	cout << "long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long) << " �ֽ�" << endl;
	cout << "long long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long long) << " �ֽ�" << endl;
	system("pause");
	return 0;
}