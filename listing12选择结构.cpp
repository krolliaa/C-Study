#include <iostream>
using namespace std;

int main12()
{
	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;

	cout << score;
	if (score > 600) 
	{
		cout << "�ҿ����˴�ѧ" << endl;
	}

	else
	{
		cout << "��û�п����˴�ѧ" << endl;
	}

	system("pause");
	return 0;
}