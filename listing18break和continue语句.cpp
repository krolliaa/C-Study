#include <iostream>
using namespace std;

int main18()
{
	cout << "��ѡ������ս�������Ѷȣ�" << endl;
	cout << "1����ͨ" << endl;
	cout << "2���е�" << endl;
	cout << "3������" << endl;

	int num = 0;
	cin >> num;
	switch (num)
	{
		case 1:
			cout << "��ѡ�������ͨ�Ѷ�" << endl;
			break;
		case 2:
			cout << "��ѡ������е��Ѷ�" << endl;
			break;
		case 3:
			cout << "��ѡ����������Ѷ�" << endl;
			break;
		default:
			break;
	}
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break; //����ѭ�����
		}
		cout << i << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << "*" << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}
	cout << "1" << endl;
	goto FLAG;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
	FLAG:
	cout << "5" << endl;
	system("pause");
	return 0;
}