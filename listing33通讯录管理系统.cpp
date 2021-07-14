#include <iostream>
#include <string>
using namespace std;

#define MAX 1000

//��ϵ��
struct person
{
	//���� �Ա� ���� �绰 סַ
	string m_Name;
	string m_Sex;
	int m_Age;
	string m_Phone;
	string m_Address;
};

//ͨѶ¼
struct addressBook
{
	//ͨѶ¼������������� + ��ǰͨѶ¼�����ϵ�˸���
	struct person personArray[MAX];
	int m_Size;
};

//����
void clear()
{
	system("cls||clear");
	return;
}

//��ͣ
void pause()
{
	system("echo �밴��������� . . . && ( read x 2> nul; rm nul || pause > nul )");
	return;
}

//�˵�����
void showMenu()
{
	clear();
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}

//1.�����ϵ��
void addPerson(struct addressBook * abs)
{
	//�ж�ͨѶ¼��ϵ�˸����Ƿ�����
	if (abs->m_Size >= MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	//����ͨ�������������ϵ��
	cout << "������";
	cin >> abs->personArray[abs->m_Size].m_Name;
	cout << "�Ա�";
	cin >> abs->personArray[abs->m_Size].m_Sex;
	//�ж��Ա��Ƿ�������ȷ
	while (abs->personArray[abs->m_Size].m_Sex != "��" && abs->personArray[abs->m_Size].m_Sex != "Ů"
		&& abs->personArray[abs->m_Size].m_Sex != "����")
	{
		cout << "�����������������롰�С�����Ů������������" << endl;
		cout << "�Ա�";
		cin >> abs->personArray[abs->m_Size].m_Sex;
	}
	cout << "���䣺";
	cin >> abs->personArray[abs->m_Size].m_Age;
	while (abs->personArray[abs->m_Size].m_Age < 0 || abs->personArray[abs->m_Size].m_Age > 150)
	{
		cout << "���������������ȷ�����䡣" << endl;
		cout << "���䣺";
		cin >> abs->personArray[abs->m_Size].m_Age;
	}
	cout << "�绰��";
	cin >> abs->personArray[abs->m_Size].m_Phone;
	cout << "סַ��";
	cin >> abs->personArray[abs->m_Size].m_Address;
	cout << "\n��ϵ�� " << abs->personArray[abs->m_Size].m_Name << " ��ӳɹ���\n" << endl;
	abs->m_Size++;
	pause();
	return;
}

//2.��ʾ��ϵ��
void showPerson(struct addressBook * abs)
{
	//�ж�ͨѶ¼������Ϊ0���ü�����ʾ
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ�գ�û����ϵ�ˣ�" << endl;
	}
	else
	{
		//ѭ��������ϵ��
		cout << "����\t�Ա�\t����\t     �绰\t        ��ַ" << endl;
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

//�����ϵ���Ƿ����
int isExist(struct addressBook * abs, string name)
{
	//�����ϵ���Ƿ����
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

//3.ɾ����ϵ��
void deletePerson(struct addressBook * abs)
{
	string name;
	cout << "��������Ҫɾ������ϵ�˵�������";
	cin >> name;

	//�����ϵ���Ƿ���� ����-1��ʾ����
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//ǰ������
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ����ϵ�� " << name << " �ɹ���" << endl;
	}
	else
	{
		cout << "��ϵ�� " << name << " ���޴��ˣ�" << endl;
	}
	pause();
}

//4.������ϵ��
void findPerson(struct addressBook * abs)
{
	string name;
	cout << "��������Ҫ���ҵ���ϵ�ˣ�";
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		cout << "����\t�Ա�\t����\t     �绰\t        ��ַ" << endl;
		cout << abs->personArray[ret].m_Name;
		cout << "\t " << abs->personArray[ret].m_Sex;
		cout << "\t " << abs->personArray[ret].m_Age;
		cout << "\t  " << abs->personArray[ret].m_Phone;
		cout << "\t    " << abs->personArray[ret].m_Address << endl;
	}
	else
	{
		cout << "��ϵ�� " << name << " ���޴��ˣ�" << endl;
	}
	pause();
}

//5.�޸���ϵ��
void modifyPerson(struct addressBook * abs)
{
	string name;
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�";
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//����
		cout << "������";
		cin >> abs->personArray[ret].m_Name;
		//�Ա�
		cout << "�Ա�";
		cin >> abs->personArray[ret].m_Sex;
		while (abs->personArray[ret].m_Sex != "��" && abs->personArray[ret].m_Sex != "Ů"
			&& abs->personArray[ret].m_Sex != "����")
		{
			cout << "���������롰�С�����Ů������������" << endl;
			cout << "�Ա�";
			cin >> abs->personArray[ret].m_Sex;
		}
		//����
		cout << "���䣺";
		cin >> abs->personArray[ret].m_Age;
		while (abs->personArray[ret].m_Age < 0 || abs->personArray[ret].m_Age > 150)
		{
			cout << "���������������ȷ�����䡣" << endl;
			cout << "���䣺";
			cin >> abs->personArray[ret].m_Age;
		}
		//�绰
		cout << "�绰��";
		cin >> abs->personArray[ret].m_Phone;
		//��ַ
		cout << "��ַ��";
		cin >> abs->personArray[ret].m_Address;

		cout << "\n��ϵ�� " << abs->personArray[ret].m_Name << " �޸ĳɹ���\n" << endl;
	}
	else
	{
		cout << "��ϵ�� " << name << " ���޴��ˣ�" << endl;
	}
	pause();
}

//6.�����ϵ��
void clearPerson(struct addressBook * abs)
{
	abs->m_Size = 0;
	pause();
}

//�����
int main()
{
	//��ʼ��ͨѶ¼
	struct addressBook abs;
	abs.m_Size = 0;
	while (true)
	{
		showMenu();
		int select = 0;
		cin >> select;
		switch (select)
		{
			//�˳�ͨѶ¼
			case 0:
				cout << "��ӭ�´�ʹ��" << endl;
				pause();
				clear();
				return 0;
				break;
			//�����ϵ��
			case 1:
				addPerson(&abs);
				break;
			//��ʾ��ϵ��
			case 2:
				showPerson(&abs);
				break;
			//ɾ����ϵ��
			case 3:
				deletePerson(&abs);
				break;
			//������ϵ��
			case 4:
				findPerson(&abs);
				break;
			//�޸���ϵ��
			case 5:
				modifyPerson(&abs);
				break;
			//�����ϵ��
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