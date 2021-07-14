#include <iostream>
using namespace std;

int main12()
{
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;

	cout << score;
	if (score > 600) 
	{
		cout << "我考上了大学" << endl;
	}

	else
	{
		cout << "我没有考上了大学" << endl;
	}

	system("pause");
	return 0;
}