#include <iostream>
#include <string>
using namespace std;

//�ṹ��
struct student
{
	//��Ա�б�
	string name;	//����
	int age;		//����
	int score;		//����
};

//��ʦ�ṹ�嶨��
struct teacher
{
	//��Ա�б�
	int id; //ְ�����
	string name;  //��ʦ����
	int age;   //��ʦ����
	struct student stu; //�ӽṹ�� ѧ��
};

//ֵ����
void printStudent(student stu)
{
	stu.age = 28;
	cout << "�Ӻ����� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
}

//��ַ����
void printStudent2(student *stu)
{
	stu->age = 28;
	cout << "�Ӻ����� ������" << stu->name << " ���䣺 " << stu->age << " ������" << stu->score << endl;
}

void printStudent(const student *stu) //��const��ֹ�������е������
{
	//stu->age = 100; //����ʧ�ܣ���Ϊ����const����
	cout << "������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;

}

int main28()
{
	struct student stu1;//struct �ؼ��ֿ���ʡ��
	stu1.name = "����";
	stu1.age = 18;
	stu1.score = 100;
	cout << "������" << stu1.name << " ���䣺" << stu1.age << " ������" << stu1.score << endl;

	struct student stu2 = { "����", 19, 60 };
	cout << "������" << stu2.name << " ���䣺" << stu2.age << " ������" << stu2.score << endl;

	student stu3;
	stu3.name = "����";
	stu3.age = 18;
	stu3.score = 80;
	cout << "������" << stu3.name << " ���䣺" << stu3.age << " ������" << stu3.score << endl;

	//�ṹ������
	struct student arr[3] =
	{
		{"����",18,80 },
		{"����",19,60 },
		{"����",20,70 }
	};

	for (int i = 0; i < 3; i++)
	{
		cout << "������" << arr[i].name << " ���䣺" << arr[i].age << " ������" << arr[i].score << endl;
	}

	struct student stu = { "����",18,100, };
	struct student * p = &stu;
	p->score = 80;
	cout << "������" << p->name << "���䣺" << p->age << "������" << p->score << endl;

	struct teacher t1;
	t1.id = 10000;
	t1.name = "����";
	t1.age = 40;

	t1.stu.name = "����";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "��ʦ ְ����ţ� " << t1.id << " ������ " << t1.name << " ���䣺 " << t1.age << endl;
	cout << "����ѧԱ ������ " << t1.stu.name << " ���䣺" << t1.stu.age << " ���Է����� " << t1.stu.score << endl;

	//ֵ����
	printStudent(stu);
	cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
	cout << endl;

	//��ַ����
	printStudent2(&stu);
	cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;

	printStudent(&stu);

	system("pause");
	return 0;
}