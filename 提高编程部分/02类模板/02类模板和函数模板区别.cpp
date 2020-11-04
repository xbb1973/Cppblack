//#include<iostream>
//#include<string>
//using namespace std;
//
////类模板和函数模板的区别
//template<class NameType, class AgeType=int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	void showPerson()
//	{
//		cout << "name: " << this->m_Name << " age:" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.类模板没有自动类型推导
//void test01()
//{
//	//Person p("孙悟空"，1000);//错误 类模板使用时 不可以用自动类型推导
//	Person<string, int>p("孙悟空", 1000);//必须使用显示指定类型的方式 使用类模板
//	p.showPerson();
//}
//
////2.类模板在模板参数列表中可以有默认参数
////template<class NameType, class AgeType=int>
//void test02()
//{
//	Person<string>p("孙悟空", 1000);
//	p.showPerson();
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}