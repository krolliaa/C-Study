#include <iostream>
using namespace std;

int main27()
{
	int a = 10;
	int b = 10;

	//const���ε���ָ�룬ָ��ָ����Ըģ�ָ��ָ���ֵ�����Ը�
	const int * p1 = &a;
	p1 = &b;
	//*p1 = 100;����
	cout << *p1 << endl;

	//const�����ε��ǳ�����ָ��ָ�򲻿ɸģ�ָ��ָ���ֵ���Ը�
	int * const p2 = &a;
	*p2 = 100;
	//p2 = &b;����
	cout << *p2 << endl;

	//const������ָ�������γ���
	const int * const p3 = &a;

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int * p = arr;  //ָ�������ָ��

	cout << "��һ��Ԫ�أ� " << arr[0] << endl;
	cout << "ָ����ʵ�һ��Ԫ�أ� " << *p << endl;

	for (int i = 0; i < 10; i++)
	{
		//����ָ���������
		cout << *p << endl;
		p++;
	}

	system("pause");
	return 0;
}