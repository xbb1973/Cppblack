//#include<iostream>
//using namespace std;
//
////�̳��е�ͬ����̬��Ա����ʽ
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
////ͬ����̬��Ա����
//void test01()
//{
//	//1.ͨ��������ʾ�̬����
//	Son s;
//	cout << "ͨ���������" << endl;
//	cout << "m_A=" << s.m_A << endl;
//	cout << "Base m_A=" << s.Base::m_A << endl;
//
//	//2.ͨ���������ʾ�̬����
//	cout << Son::m_A << endl;
//	cout << Son::Base::m_A << endl;
//
//}
//
////ͬ���ľ�̬��Ա����
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