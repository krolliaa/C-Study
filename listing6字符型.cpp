#include <iostream>
using namespace std;

int main6()
{
	// char 类型不可以使用双引号
	// 单引号只能引用一个字符
	char ch = 'a';
	cout << ch << endl;
	cout << sizeof(char) << " 字节" << endl;
	// 可以通过强制类型转换来查看字符对应的ASCII码
	// 可以直接给字符型变量赋ASCII码值
	// 48 0 65 A 97 a
	cout << (int)ch << endl;
	ch = 97;
	cout << ch << endl;
	system("pause");
	return 0;
}