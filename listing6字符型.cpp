#include <iostream>
using namespace std;

int main6()
{
	// char ���Ͳ�����ʹ��˫����
	// ������ֻ������һ���ַ�
	char ch = 'a';
	cout << ch << endl;
	cout << sizeof(char) << " �ֽ�" << endl;
	// ����ͨ��ǿ������ת�����鿴�ַ���Ӧ��ASCII��
	// ����ֱ�Ӹ��ַ��ͱ�����ASCII��ֵ
	// 48 0 65 A 97 a
	cout << (int)ch << endl;
	ch = 97;
	cout << ch << endl;
	system("pause");
	return 0;
}