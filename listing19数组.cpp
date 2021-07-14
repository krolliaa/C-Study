#include <iostream>
using namespace std;

int main19()
{
	int score[10];

	score[0] = 100;
	score[1] = 99;
	score[2] = 85;

	cout << score[0] << endl;
	cout << score[1] << endl;
	cout << score[2] << endl;

	// 若{}内不足10个数据，剩余数据用0补全
	int score2[10] = { 100,90,80,70,60,50,40,30,20,10 };
	// 逐个输出
	cout << score2[0] << endl;
	cout << score2[1] << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << score2[i] << endl;
	}

	int score3[] = { 100,90,80,70,60,50,40,30,20,10 };

	for (int i = 0; i < 10; i++)
	{
		cout << score3[i] << endl;
	}
	cout << score2[20] << endl;
	system("pause");
	return 0;
}