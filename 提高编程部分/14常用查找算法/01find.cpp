//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	//����==
//	bool operator==(const Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//public:
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i + 1);
//	}
//	//�����������Ƿ��� 5 ���Ԫ��
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it == v.end())
//	{
//		cout << "û���ҵ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���" << *it << endl;
//	}
//}
//
//void test02()
//{
//	vector<Person> v;
//
//	//��������
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
//	if (it == v.end())
//	{
//		cout << "û���ҵ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�������" << it->m_Name << "���䣺" << it->m_Age << endl;
//	}
//	
//}
//
//
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}