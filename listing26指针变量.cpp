#include <iostream>
using namespace std;

int main26()
{
	//1��ָ��Ķ��壺�������� * ������;
	int a = 10;
	int * p;

	//2��ָ�������ֵ��ָ�������ű�����ַ
	p = &a;
	cout << &a << endl;
	cout << p << endl;

	//3��ָ���ʹ�ã�ָ��Ҳ���������ͣ�ռ�� 4 ���ֽ�
	cout << "*p = " << *p << endl;

	cout << *p << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(char *) << endl;
	cout << sizeof(float *) << endl;
	cout << sizeof(double *) << endl;

	//��ָ���Ұָ�붼������������Ŀռ䣬��˲�Ҫ����

	int *q = NULL;
	//���ʿ�ָ�뱨��
	//cout << *q << endl;

	int *k = (int *)0x1100;
	//����Ұָ�뱨��
	//cout << *k << endl;

	system("pause");
	return 0;
}