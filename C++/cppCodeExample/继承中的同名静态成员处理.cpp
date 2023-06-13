//#include<iostream>
//using namespace std;
//
////继承中的同名静态成员处理方式
//class Base
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "this is base func" << endl;
//	}
//};
//int Base::m_A = 100;
//class Son :public Base
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "this is son func" << endl;
//	}
//};
//int Son::m_A = 200;
//
////同名静态成员属性
//void test01()
//{
//	//1.通过对象访问静态数据
//	Son s;
//	cout << "通过对象访问" << endl;
//	cout << "m_A=" << s.m_A << endl;
//	cout << "Base m_A=" << s.Base::m_A << endl;
//
//	//2.通过类名访问静态数据
//	cout << Son::m_A << endl;
//	cout << Son::Base::m_A << endl;
//
//}
//
////同名的静态成员函数
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}