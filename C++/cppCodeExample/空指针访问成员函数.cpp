//#include<iostream>
//using namespace std;
//
////空指针调用成员函数
//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//	void showPersonAge()
//	{
//		//cout << "age=" << m_Age << endl;
//		//上面这句代码相当于：cout << "age=" << this->m_Age << endl;
//		//而在这里这一个this指向的对象为空 所以什么都调不出来
//		//防止代码崩掉的方法如下（提高代码的健壮性）
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age=" << m_Age << endl;
//	}
//	int m_Age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//	//p->showClassName();
//	p->showPersonAge();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}