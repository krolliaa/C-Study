#include <iostream>
using namespace std;

int main17()
{
	//whileѭ�����
	int num = 0;
	while (num < 10)
	{
		cout << "num = " << num << endl;
		num++;
	}

	//do-whileѭ�����
	int num1 = 0;
	do
	{
		cout << num1 << endl;
		num1++;
	} while (num1 < 10);

	//ˮ�ɻ�����
	int num2 = 0;
	int sum = 0;
	cout << "������һ�������ж��Ƿ�Ϊˮ�ɻ���" << endl;
	num2 = 153;
	int num3 = num2;
	do {
		int middle = num2 % 10;
		middle = middle * middle * middle;
		sum += middle;
		num2 /= 10;
	} while (num2 != 0);
	if (num3 == sum) cout << "������ˮ�ɻ���" << endl;
	else cout << "��������ˮ�ɻ���" << endl;

	//forѭ�����
	for (int i = 0; i < 10; i++) 
	{
		cout << i << endl;
	}

	//��������Ϸ
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0)
		{
			cout << "������ " << i << endl;
			continue;
		}
		int j = i;
		do {
			int change = j % 10;
			if (change != 0 && (change == 7 || change % 7 == 0))
			{
				cout << "������ " << i << endl;
				break;
			}
			j /= 10;
		} while (j != 0);
	}

	//Ƕ��ѭ��
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}