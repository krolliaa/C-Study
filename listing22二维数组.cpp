#include <iostream>
using namespace std;

int main22()
{
	//方式1  
	//数组类型 数组名 [行数][列数]
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	//方式2 
	//数据类型 数组名[行数][列数] = { {数据1，数据2 } ，{数据3，数据4 } };
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	//方式3
	//数据类型 数组名[行数][列数] = { 数据1，数据2 ,数据3，数据4  };
	int arr3[2][3] = { 1,2,3,4,5,6 };

	//方式4 
	//数据类型 数组名[][列数] = { 数据1，数据2 ,数据3，数据4  };
	int arr4[][3] = { 1,2,3,4,5,6 };

	cout << "二维数组大小： " << sizeof(arr4) << endl;
	cout << "二维数组一行大小： " << sizeof(arr4[0]) << endl;
	cout << "二维数组元素大小： " << sizeof(arr4[0][0]) << endl;

	cout << "二维数组行数： " << sizeof(arr4) / sizeof(arr4[0]) << endl;
	cout << "二维数组列数： " << sizeof(arr4[0]) / sizeof(arr4[0][0]) << endl;

	//地址
	cout << "二维数组首地址：" << &arr4 << endl;
	cout << "二维数组第一行地址：" << &arr4[0] << endl;
	cout << "二维数组第二行地址：" << &arr4[1] << endl;

	cout << "二维数组第一个元素地址：" << &arr4[0][0] << endl;
	cout << "二维数组第二个元素地址：" << &arr4[0][1] << endl;

	system("pause");
	return 0;
}