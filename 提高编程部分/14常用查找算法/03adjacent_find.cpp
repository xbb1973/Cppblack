//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
////1.查找内置数据类型
//void test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(5);
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(4);
//	v.push_back(3);
//
//	//查找相邻重复元素
//	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
//	if (it == v.end())
//	{
//		cout << "找不到！" << endl;
//	}
//	else
//	{
//		cout << "找到相邻重复元素为：" << *it << endl;
//	}
//}
//
////2.查找自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//public:
//	string m_Name;
//	int m_Age;
//};
//
//class Adjust
//{
//public:
//	bool operator()(Person& p1, Person& p2)
//	{
//		return (p1.m_Age == p2.m_Age) && (p1.m_Name == p2.m_Name);
//	}
//};
//
//void test02()
//{
//	vector<Person>p;
//
//	p.push_back(Person("aaa", 13));
//	p.push_back(Person("bbb", 13));
//	p.push_back(Person("aaa", 15));
//	p.push_back(Person("aaa", 15));
//	p.push_back(Person("ccc", 14));
//
//	vector<Person>::iterator it=adjacent_find(p.begin(), p.end(), Adjust());
//	if (it == p.end())
//	{
//		cout << "找不到！" << endl;
//	}
//	else
//	{
//		cout << "找到相邻重复元素为：" << it->m_Age << endl;
//	}
//}
//
//
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}