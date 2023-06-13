//#include<iostream>
//using namespace std;
//
////赋值运算符重载
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//		//在堆区创建整形数据 new返回的是该数据类型的指针
//		//new的是什么数据类型 返回的就是什么类型的指针
//		//堆区的数据 由程序员手动开辟 手动释放 释放用析构函数
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	//重载 赋值运算符
//	Person& operator=(Person &p)
//	{
//		//编译器是提供浅拷贝
//		//m_Age = p.m_Age;
//
//		//应该先判断是否由属性在堆区 如果有先释放干净 然后再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//		//深拷贝
//		m_Age = new int(*p.m_Age);
//		
//		//返回对象本身
//		return *this;
//	}
//
//
//	int *m_Age;
//};
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3=p2 = p1;//赋值操作 浅拷贝 p1和p2实际上指向的是同一块内存
//	//解决方案：利用深拷贝 解决 浅拷贝带来的问题
//
//	//cout << "p1的年龄为：" << p1.m_Age << endl; //返回的是指针
//	cout << "p1的年龄为：" << *p1.m_Age << endl;//解引用
//	cout << "p2的年龄为：" << *p2.m_Age << endl;//解引用
//	cout << "p3的年龄为：" << *p3.m_Age << endl;//解引用
//}
//
//int main()
//{
//	test01();
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//
//	//c = b = a;
//
//	//cout << "a=" << a << endl;
//	//cout << "b=" << b << endl;
//	//cout << "c=" << c << endl;
//	system("pause");
//	return 0;
//}