//#include<iostream>
//using namespace std;
//
////静态成员变量
//
//class Person
//{
//public:
//	static int m_A;//静态成员变量
//
//	//静态成员变量特点：
//	//1.在编译阶段分配内存
//	//2.类内生存 类外初始化
//	//3.所有对象共享同一份数据
//
//private:
//	static int m_B;//静态成员变量也有访问权限
//};
//
//int Person::m_A = 10;//静态成员变量赋值方式之一 通过类型赋值
//int Person::m_B = 10;
//
//void test01()
//{
//	//静态成员变量两种访问方式
//
//	//1.通过对象
//	Person p1;
//	p1.m_A = 100;
//	cout << "p1.m_A" << p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	//定义了两个名称分别为p1和p2的类的对象 给第二个对象赋值的时候 改变了类中静态成员的值
//	cout << "p1.m_A=" << p1.m_A << endl;//共享同一份数据
//	cout << "p2.m_A=" << p2.m_A << endl;
//
//	//2.通过类名
//	//cout << "m_A=" << Person::m_A << endl;
//
//	
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}