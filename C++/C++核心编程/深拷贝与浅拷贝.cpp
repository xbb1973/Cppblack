//#include<iostream>
//using namespace std;
//
////深拷贝与浅拷贝
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//
//	Person(int age, int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);//创建放在堆区的数据
//		cout << "Person的默认构造函数调用" << endl;
//	}
//
//	//自己实现拷贝构造函数 解决浅拷贝带来的问题
//	Person(const Person& p)
//	{
//		cout << "Person 拷贝构造函数的调用" << endl;
//		//m_Height = p.m_Height;编译器默认实现就是这行代码
//		//深拷贝操作
//
//		m_Height=new int(*p.m_Height);
//	}
//
//
//	~Person()
//	{
//		//析构代码 将堆区开辟数据做释放操作
//		if (m_Height != NULL)//如果指向的不为空 
//		{
//			delete m_Height;//释放这块内存
//			m_Height = NULL;
//		}
//		cout << "Person的析构函数调用" << endl;
//	}
//	int m_Age;//年龄
//	int* m_Height;//
//};
//
//void test01()
//{
//	Person p1(18,160);
//	cout << "p1的年龄为：" << p1.m_Age<<"身高为："<<*p1.m_Height << endl;
//	
//	Person p2(p1);
//	//浅拷贝 拷贝的和原来的指向同一块内存 释放一个如果在释放另一个会导致错误
//	cout << "p2的年龄为：" << p2.m_Age << "身高为：" << *p2.m_Height << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}