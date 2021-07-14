#include <iostream>
#include <string>
using namespace std;

#define MAX 1000

//联系人
struct person
{
	//姓名 性别 年龄 电话 住址
	string m_Name;
	string m_Sex;
	int m_Age;
	string m_Phone;
	string m_Address;
};

//通讯录
struct addressBook
{
	//通讯录可容纳最多人数 + 当前通讯录存放联系人个数
	struct person personArray[MAX];
	int m_Size;
};

//清屏
void clear()
{
	system("cls||clear");
	return;
}

//暂停
void pause()
{
	system("echo 请按任意键继续 . . . && ( read x 2> nul; rm nul || pause > nul )");
	return;
}

//菜单界面
void showMenu()
{
	clear();
	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通讯录 *****" << endl;
	cout << "*************************" << endl;
}

//1.添加联系人
void addPerson(struct addressBook * abs)
{
	//判断通讯录联系人个数是否满人
	if (abs->m_Size >= MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	//条件通过，允许添加联系人
	cout << "姓名：";
	cin >> abs->personArray[abs->m_Size].m_Name;
	cout << "性别：";
	cin >> abs->personArray[abs->m_Size].m_Sex;
	//判断性别是否输入正确
	while (abs->personArray[abs->m_Size].m_Sex != "男" && abs->personArray[abs->m_Size].m_Sex != "女"
		&& abs->personArray[abs->m_Size].m_Sex != "其它")
	{
		cout << "您的输入有误！请输入“男”、“女”或“其它”。" << endl;
		cout << "性别：";
		cin >> abs->personArray[abs->m_Size].m_Sex;
	}
	cout << "年龄：";
	cin >> abs->personArray[abs->m_Size].m_Age;
	while (abs->personArray[abs->m_Size].m_Age < 0 || abs->personArray[abs->m_Size].m_Age > 150)
	{
		cout << "年龄错误！请输入正确的年龄。" << endl;
		cout << "年龄：";
		cin >> abs->personArray[abs->m_Size].m_Age;
	}
	cout << "电话：";
	cin >> abs->personArray[abs->m_Size].m_Phone;
	cout << "住址：";
	cin >> abs->personArray[abs->m_Size].m_Address;
	cout << "\n联系人 " << abs->personArray[abs->m_Size].m_Name << " 添加成功！\n" << endl;
	abs->m_Size++;
	pause();
	return;
}

//2.显示联系人
void showPerson(struct addressBook * abs)
{
	//判断通讯录人数，为0不用继续显示
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空，没有联系人！" << endl;
	}
	else
	{
		//循环遍历联系人
		cout << "姓名\t性别\t年龄\t     电话\t        地址" << endl;
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << abs->personArray[i].m_Name;
			cout << "\t " << abs->personArray[i].m_Sex;
			cout << "\t " << abs->personArray[i].m_Age;
			cout << "\t  " << abs->personArray[i].m_Phone;
			cout << "\t    " << abs->personArray[i].m_Address << endl;
		}
	}
	pause();
}

//检查联系人是否存在
int isExist(struct addressBook * abs, string name)
{
	//检测联系人是否存在
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

//3.删除联系人
void deletePerson(struct addressBook * abs)
{
	string name;
	cout << "请输入您要删除的联系人的姓名：";
	cin >> name;

	//检测联系人是否存在 不是-1表示存在
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//前移数据
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除联系人 " << name << " 成功！" << endl;
	}
	else
	{
		cout << "联系人 " << name << " 查无此人！" << endl;
	}
	pause();
}

//4.查找联系人
void findPerson(struct addressBook * abs)
{
	string name;
	cout << "请输入您要查找的联系人：";
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		cout << "姓名\t性别\t年龄\t     电话\t        地址" << endl;
		cout << abs->personArray[ret].m_Name;
		cout << "\t " << abs->personArray[ret].m_Sex;
		cout << "\t " << abs->personArray[ret].m_Age;
		cout << "\t  " << abs->personArray[ret].m_Phone;
		cout << "\t    " << abs->personArray[ret].m_Address << endl;
	}
	else
	{
		cout << "联系人 " << name << " 查无此人！" << endl;
	}
	pause();
}

//5.修改联系人
void modifyPerson(struct addressBook * abs)
{
	string name;
	cout << "请输入您要修改的联系人：";
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//姓名
		cout << "姓名：";
		cin >> abs->personArray[ret].m_Name;
		//性别
		cout << "性别：";
		cin >> abs->personArray[ret].m_Sex;
		while (abs->personArray[ret].m_Sex != "男" && abs->personArray[ret].m_Sex != "女"
			&& abs->personArray[ret].m_Sex != "其它")
		{
			cout << "错误！请输入“男”、“女”或“其它”。" << endl;
			cout << "性别：";
			cin >> abs->personArray[ret].m_Sex;
		}
		//年龄
		cout << "年龄：";
		cin >> abs->personArray[ret].m_Age;
		while (abs->personArray[ret].m_Age < 0 || abs->personArray[ret].m_Age > 150)
		{
			cout << "年龄错误！请输入正确的年龄。" << endl;
			cout << "年龄：";
			cin >> abs->personArray[ret].m_Age;
		}
		//电话
		cout << "电话：";
		cin >> abs->personArray[ret].m_Phone;
		//地址
		cout << "地址：";
		cin >> abs->personArray[ret].m_Address;

		cout << "\n联系人 " << abs->personArray[ret].m_Name << " 修改成功！\n" << endl;
	}
	else
	{
		cout << "联系人 " << name << " 查无此人！" << endl;
	}
	pause();
}

//6.清空联系人
void clearPerson(struct addressBook * abs)
{
	abs->m_Size = 0;
	pause();
}

//主入口
int main()
{
	//初始化通讯录
	struct addressBook abs;
	abs.m_Size = 0;
	while (true)
	{
		showMenu();
		int select = 0;
		cin >> select;
		switch (select)
		{
			//退出通讯录
			case 0:
				cout << "欢迎下次使用" << endl;
				pause();
				clear();
				return 0;
				break;
			//添加联系人
			case 1:
				addPerson(&abs);
				break;
			//显示联系人
			case 2:
				showPerson(&abs);
				break;
			//删除联系人
			case 3:
				deletePerson(&abs);
				break;
			//查找联系人
			case 4:
				findPerson(&abs);
				break;
			//修改联系人
			case 5:
				modifyPerson(&abs);
				break;
			//清空联系人
			case 6:
				clearPerson(&abs);
				break;
			default:
				break;
		}
	}
	pause();
	return 0;
}