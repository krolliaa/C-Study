#include <iostream>
using namespace std;

int main17()
{
	//while循环语句
	int num = 0;
	while (num < 10)
	{
		cout << "num = " << num << endl;
		num++;
	}

	//do-while循环语句
	int num1 = 0;
	do
	{
		cout << num1 << endl;
		num1++;
	} while (num1 < 10);

	//水仙花数字
	int num2 = 0;
	int sum = 0;
	cout << "请输入一个数字判断是否为水仙花数" << endl;
	num2 = 153;
	int num3 = num2;
	do {
		int middle = num2 % 10;
		middle = middle * middle * middle;
		sum += middle;
		num2 /= 10;
	} while (num2 != 0);
	if (num3 == sum) cout << "该数是水仙花数" << endl;
	else cout << "该数不是水仙花数" << endl;

	//for循环语句
	for (int i = 0; i < 10; i++) 
	{
		cout << i << endl;
	}

	//敲桌子游戏
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0)
		{
			cout << "敲桌子 " << i << endl;
			continue;
		}
		int j = i;
		do {
			int change = j % 10;
			if (change != 0 && (change == 7 || change % 7 == 0))
			{
				cout << "敲桌子 " << i << endl;
				break;
			}
			j /= 10;
		} while (j != 0);
	}

	//嵌套循环
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