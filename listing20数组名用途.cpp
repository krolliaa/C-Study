#include <iostream>
using namespace std;

int main20()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//sizeof 可以获取整个数组内存空间大小
	cout << "整个数组所占内存空间为：" << sizeof(arr) << endl;
	cout << "每个元素所占内存空间为：" << sizeof(arr[0]) << endl;
	cout << "数组的元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "数组首地址为：" << (int)&arr << endl;
	cout << "数组中第一个元素地址为：" << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址为：" << (int)&arr[1] << endl;

	//arr = 100; 错误，数组名是常量，因此不可以赋值

	//5只小猪称体重
	int krr[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		if (krr[i] > max)	max = krr[i];
	}
	cout << "最重的小猪体重为：" << max << endl;

	// 数组元素逆置
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