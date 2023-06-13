//#include<iostream>
//using namespace std;
//
////重载关系运算符
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Age = age;
//		m_Name = name;
//	}
//	
//	bool operator==(Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			return true;
//		}
//		return false;
//
//
//	}
//
//private:
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//
//	if (p1 == p1)
//	{
//		cout << "p1和p2是相等的" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}