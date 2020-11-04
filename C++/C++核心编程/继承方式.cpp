//#include<iostream>
//using namespace std;
//
////继承方式
//
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////公共继承
//class Son1 :public Base1
//{
//	void func()
//	{
//		m_A = 10;//父类中公共权限成员 到子类中依旧为公共权限
//		m_B = 10;//父类中保护权限成员 到子类中依旧为保护权限
//		//m_C = 10;//父类中私有权限内容 到子类中不可访问
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 10;
//}
//
////保护继承
//class Son2 :protected Base1
//{
//	void func()
//	{
//		m_A = 10;//保护继承继承来后全为保护权限
//		m_B = 10;
//		//m_C = 10;
//	}
//};
//void test01()
//{
//	Son2 s2;
//	
//}
//
////私有继承
//class Son3 :protected Base1
//{
//	void func()
//	{
//		m_A = 10;//保护继承继承来后全为保护权限
//		m_B = 10;
//		//m_C = 10;
//	}
//};
//void test01()
//{
//	Son3 s3;
//	
//}
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}