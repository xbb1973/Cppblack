//#include<iostream>
//using namespace std;
//
////左移运算符重载
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//	//利用成员函数重载 左移运算符  operator<<(cout) 简化版本为：p<<cout;
//	//不会利用成员函数重载<<运算符，因为无法实现  cout在左侧
//	//void operator<<(Person &p)
//	//{
//
//	//}
//private:
//	int m_A;
//	int m_B;
//};
//
////只能运用成员函数重载左移运算符
////              cout转到定义看 为ostream类 而且全局只能定义一个 所以用引用
//ostream& operator<<(ostream &cout, Person& p)   //本质：operator<<(cout,p) 简化 cout<<p
//{
//	cout << "m_A=" << p.m_A << " m_B=" << p.m_B;
//	return cout;
//}
//
//
//void test01()
//{
//	Person p(10,10);
//
//	//这里相当于一个链式编程 << << <<
//	cout << p<<endl;
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}