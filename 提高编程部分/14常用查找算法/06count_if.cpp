//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
////������������
//class Greater4
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 4;
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(4);
//
//	int num = count_if(v.begin(), v.end(), Greater4());
//	cout << "����4�ĸ���Ϊ��" << num << endl;
//}
//
////�Զ�����������
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//
//	int m_Age;
//	string m_Name;
//};
//
//class AgeLess35
//{
//public:
//	bool operator()(Person &s)
//	{
//		return s.m_Age < 35;
//	}
//};
//
//void test02()
//{
//	vector<Person>v;
//	v.push_back(Person("����", 35));
//	v.push_back(Person("����", 35));
//	v.push_back(Person("�ŷ�", 35));
//	v.push_back(Person("����", 30));
//	v.push_back(Person("�ܲ�", 25));
//
//	int num=count_if(v.begin(), v.end(), AgeLess35());
//
//	cout << "С��35��ĸ�����" << num << endl;
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}