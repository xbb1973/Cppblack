//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person(int age)
//	{
//		this->age = age;
//		//p1在调 所以这个this就指向p1
//		//this指针指向 被调用的成员函数 所属的对象
//	}
//	Person& PersonAddAge(Person& p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//
//};
//
////1.解决名称冲突
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年龄为：" << p1.age << endl;
//}
////2.返回对象本身用*this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//
//	cout << "p2的年龄为：" << p2.age<<endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}