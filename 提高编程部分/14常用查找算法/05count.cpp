//#include<iostream>
//#include<vector>
//using namespace std;
//
////内置数据类型
//void test01()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(1);
//	v.push_back(3);
//	v.push_back(1);
//	v.push_back(5);
//
//	int n=count(v.begin(), v.end(), 1);
//	cout << n << "个1" << endl;
//}
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//
//	bool operator==(const Person& p)
//	{
//		if (this->m_Age == p.m_Age&&this->m_Name==p.m_Name)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	int m_Age;
//	string m_Name;
//};
//
//
//
////自定义数据类型
//void test02()
//{
//	vector<Person>p;
//	p.push_back(Person("aaa", 13));
//	p.push_back(Person("bbb", 13));
//	p.push_back(Person("aaa", 13));
//	p.push_back(Person("bbb", 13));
//	p.push_back(Person("aaa", 13));
//
//	int num=count(p.begin(), p.end(), Person("aaa", 13));
//	cout << num << endl;
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