#include<iostream>
#include<string>
/*平时使用的时候建议加上#include<string.h>（尤其在以下情况下）
1、使用string类型
2、使用cin、cout语句来输入输出string类型变量（注意，同时还需要#include<sstream>）
3、使用memset()、strlen()、strcpy()等函数时。*/
using namespace std;

void showMenu();//菜单显示函数的声明

struct Person//结构体必须声明在函数前面 不能声明在后面然后在前面放声明 函数可以
{
	string m_Name;//姓名
	int m_Sex;//性别：1：男 2：女
	int m_Age;//年龄
	string m_Phone;//电话
	string m_Addr;//地址
};
#define MAX 1000//最大人数
struct Addressbooks
{
	struct Person personArray[MAX];//通讯录中保存的联系人数组
	int m_Size;//通讯录中人员个数
};

//菜单显示函数
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}
//1.添加联系人函数
void addPerson(Addressbooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//姓名
		cout << "请输入姓名" << endl;
		cin >> abs->personArray[abs->m_Size].m_Name;

		//性别
		cout << "请输入性别：" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		
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
				cout << "输入有误，请重新输入";//??这个地方如果输成字符串会造成死循环
			}
			
		}

		//年龄
		cout << "请输入年龄：" << endl;
		cin >> abs->personArray[abs->m_Size].m_Age;

		//联系电话
		cout << "请输入联系电话：" << endl;
		cin >> abs->personArray[abs->m_Size].m_Phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		cin >> abs->personArray[abs->m_Size].m_Addr;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");//清屏操作

	}
}
//2.显示所有联系人函数
void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name<<"\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女")<<"\t";//这句写的挺好的
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话" << abs->personArray[i].m_Phone << "\t";
			cout << "住址" << abs->personArray[i].m_Addr <<endl;
		}
	}
	system("pause");
	system("cls");
}

//判断是否存在查询的人员 存在返回在数组中索引位置 不存在返回-1
int isExit(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;//存在时返回位置
		}
		return -1;//不存在时返回-1
	}
}
//3.删除指定联系人信息
void deletePerson(Addressbooks* abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;

	int ret=isExit(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
			//直接把这个元素用后面的替换掉，删除+填空一步到位 妙啊
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//4.查找指定联系人
void findPerson(Addressbooks *abs)
{
	cout << "请输入您要查找的人" << endl;
	string name;
	cin >> name;

	int ret = isExit(abs, name);
	if (ret==-1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << abs->personArray[ret].m_Sex << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}
	system("pause");
	system("cls");
}

//5.修改联系人
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入您要修改的对象" << endl;
	string name;
	cin >> name;
	int ret=isExit(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		//姓名
		cout << "请输入修改后的姓名" << endl;
		cin >> abs->personArray[ret].m_Name;

		//性别
		cout << "请输入修改后的性别：" << endl;
		cout << "1---男"<<endl;
		cout << "2---女"<<endl;
		int sex = 0;
		cin >> sex;
		while (true)
		{
			if (sex == 2 || sex == 1)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}

			cout << "输入有误,请重新输入" << endl;
		}

		//年龄
		cout << "请输入修改后的年龄" << endl;
		cin >> abs->personArray[ret].m_Age;

		//联系电话
		cout << "请输入修改后的电话" << endl;
		cin >> abs->personArray[ret].m_Phone;

		//家庭住址
		cout << "请输入修改后的家庭住址：" << endl;
		cin >> abs->personArray[ret].m_Addr;

		cout << "修改成功" << endl;
	}
	system("pause");
	system("cls");
}

//6.清空所有联系人
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

int main()
{
	Addressbooks abs;//创建通讯录
	abs.m_Size = 0;//初始化通讯录中的人数

	int select=0 ;//C++中定义整型数据必须赋初值？？？不赋初值会怎么样

	while (true)
	{
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1://添加联系人
			addPerson(&abs);
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
			deletePerson(&abs);
			break;
		case 4://查找联系人
			findPerson(&abs);
			break;
		case 5://修改联系人
			modifyPerson(&abs);
			break;
		case 6://清空联系人
		{
			cout << "是否确认清空联系人（yes/no）？" << endl;
			string str;
			cin >> str;
			if (str == "yes")
			{
				cleanPerson(&abs);
			}
			else
			{
				cout << "请重新输入" << endl;
			}
		}
			break;
		case 0://退出通讯录
			cout << "欢迎下次使用" << endl;
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






