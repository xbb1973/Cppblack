//#include<iostream>
//using namespace std;
//
////继承中同名成员处理方式
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base下的func函数的调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base-func(int a)的调用" << endl;
//	}
//	int m_A;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son下的func函数的调用" << endl;
//	}
//	int m_A;
//};
////同名成员属性的处理方式
//void test01()
//{
//	Son s;
//	cout << "s.m_A=" << s.m_A << endl;
//	cout << "Base下的s.m_A=" << s.Base::m_A << endl;
//	//s.func();
//	s.Base::func();
//}
////同名函数的处理方式
//void test02()
//{
//	Son s;
//	s.func();//直接调用是子类的同名成员
//
//	//调用到父类中的同名成员函数？
//	s.Base::func();
//
//	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名函数
//	//如果想访问到父类中被隐藏的同名成员函数 需要加作用域
//	s.Base::func(100);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}