#include <iostream>
using namespace std;

int main20()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//sizeof ���Ի�ȡ���������ڴ�ռ��С
	cout << "����������ռ�ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ����ռ�ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "�����Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "�����׵�ַΪ��" << (int)&arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;

	//arr = 100; �����������ǳ�������˲����Ը�ֵ

	//5ֻС�������
	int krr[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		if (krr[i] > max)	max = krr[i];
	}
	cout << "���ص�С������Ϊ��" << max << endl;

	// ����Ԫ������
	int crr[5] = { 1,2,3,4,5 };
	int j = 0;
	int drr[5];
	for (int i = 4; i >= 0; i--)
	{
		drr[j++] = crr[i];
		cout << "drr[" << j << "] = " << drr[j-1] << endl;
	}
	system("pause");
	return 0;
}