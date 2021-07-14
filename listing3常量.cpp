#include <iostream>
using namespace std;

// 常量：常量是不能被修改的
// 包括define定义宏常量和const定义常量
//1、宏常量
#define DAY 7

int main3()
{
	cout << "一周里总共有 " << DAY << " 天" << endl;
	//2、const 修饰变量
	const int month = 12;
	cout << "一年里总共有 " << month << " 个月份" << endl;
	system("pause");
	return 0;
}