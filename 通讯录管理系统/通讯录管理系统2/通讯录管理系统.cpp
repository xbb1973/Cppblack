#include<iostream>
#include<string>
/*ƽʱʹ�õ�ʱ�������#include<string.h>����������������£�
1��ʹ��string����
2��ʹ��cin��cout������������string���ͱ�����ע�⣬ͬʱ����Ҫ#include<sstream>��
3��ʹ��memset()��strlen()��strcpy()�Ⱥ���ʱ��*/
using namespace std;

void showMenu();//�˵���ʾ����������

struct Person//�ṹ����������ں���ǰ�� ���������ں���Ȼ����ǰ������� ��������
{
	string m_Name;//����
	int m_Sex;//�Ա�1���� 2��Ů
	int m_Age;//����
	string m_Phone;//�绰
	string m_Addr;//��ַ
};
#define MAX 1000//�������
struct Addressbooks
{
	struct Person personArray[MAX];//ͨѶ¼�б������ϵ������
	int m_Size;//ͨѶ¼����Ա����
};

//�˵���ʾ����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}
//1.�����ϵ�˺���
void addPerson(Addressbooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//����
		cout << "����������" << endl;
		cin >> abs->personArray[abs->m_Size].m_Name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		
		int sex=0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "������������������";//??����ط��������ַ����������ѭ��
			}
			
		}

		//����
		cout << "���������䣺" << endl;
		cin >> abs->personArray[abs->m_Size].m_Age;

		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		cin >> abs->personArray[abs->m_Size].m_Phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		cin >> abs->personArray[abs->m_Size].m_Addr;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");//��������

	}
}
//2.��ʾ������ϵ�˺���
void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name<<"\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů")<<"\t";//���д��ͦ�õ�
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ" << abs->personArray[i].m_Addr <<endl;
		}
	}
	system("pause");
	system("cls");
}

//�ж��Ƿ���ڲ�ѯ����Ա ���ڷ���������������λ�� �����ڷ���-1
int isExit(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;//����ʱ����λ��
		}
		return -1;//������ʱ����-1
	}
}
//3.ɾ��ָ����ϵ����Ϣ
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;

	int ret=isExit(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
			//ֱ�Ӱ����Ԫ���ú�����滻����ɾ��+���һ����λ �
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//4.����ָ����ϵ��
void findPerson(Addressbooks *abs)
{
	cout << "��������Ҫ���ҵ���" << endl;
	string name;
	cin >> name;

	int ret = isExit(abs, name);
	if (ret==-1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	system("pause");
	system("cls");
}

//5.�޸���ϵ��
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵĶ���" << endl;
	string name;
	cin >> name;
	int ret=isExit(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		//����
		cout << "�������޸ĺ������" << endl;
		cin >> abs->personArray[ret].m_Name;

		//�Ա�
		cout << "�������޸ĺ���Ա�" << endl;
		cout << "1---��"<<endl;
		cout << "2---Ů"<<endl;
		int sex = 0;
		cin >> sex;
		while (true)
		{
			if (sex == 2 || sex == 1)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}

			cout << "��������,����������" << endl;
		}

		//����
		cout << "�������޸ĺ������" << endl;
		cin >> abs->personArray[ret].m_Age;

		//��ϵ�绰
		cout << "�������޸ĺ�ĵ绰" << endl;
		cin >> abs->personArray[ret].m_Phone;

		//��ͥסַ
		cout << "�������޸ĺ�ļ�ͥסַ��" << endl;
		cin >> abs->personArray[ret].m_Addr;

		cout << "�޸ĳɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//6.���������ϵ��
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

int main()
{
	Addressbooks abs;//����ͨѶ¼
	abs.m_Size = 0;//��ʼ��ͨѶ¼�е�����

	int select=0 ;//C++�ж����������ݱ��븳��ֵ������������ֵ����ô��

	while (true)
	{
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1://�����ϵ��
			addPerson(&abs);
			break;
		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4://������ϵ��
			findPerson(&abs);
			break;
		case 5://�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://�����ϵ��
		{
			cout << "�Ƿ�ȷ�������ϵ�ˣ�yes/no����" << endl;
			string str;
			cin >> str;
			if (str == "yes")
			{
				cleanPerson(&abs);
			}
			else
			{
				cout << "����������" << endl;
			}
		}
			break;
		case 0://�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}






