//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
////vector�����д���Զ�����������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 10);
//	Person p3("ccc", 10);
//	Person p4("ddd", 10);
//	Person p5("eee", 10);
//
//	//���������������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//���������е�����
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//<>����������ʲô�������� *it���������ʲô����
//		//cout << "������" << (*it).m_Name << " ����" << (*it).m_Age << endl;
//
//		cout << "������" <<it->m_Name<< " ����" << it->m_Age << endl;
//	}
//}
//
////����Զ����ָ��
//void test02()
//{
//	vector<Person*>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 10);
//	Person p3("ccc", 10);
//	Person p4("ddd", 10);
//	Person p5("eee", 10);
//
//	//���������������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//��������
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "����2��������" << (*it)->m_Name << " ���䣺" << (*it)->m_Age << endl;
//	}
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}