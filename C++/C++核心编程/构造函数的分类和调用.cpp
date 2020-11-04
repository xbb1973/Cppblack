//#include<iostream>
//using namespace std;
////1.构造函数的两种分类方式
////按参数分：有参构造和无参构造
////按类型分：普通构造和拷贝构造
//class Person
//{
//public:
//	//无参（默认）构造函数
//	Person()
//	{
//		cout << "无参构造函数！" << endl;
//	}
//	//有参构造函数
//	Person(int a)
//	{
//		age = a;
//		cout << "有参构造函数！" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p)
//	{
//		age = p.age;//将传入的人身上所有的属性 拷贝到我的身上
//		cout << "拷贝构造函数！" << endl;
//	}
//	//析构函数
//	~Person()
//	{
//		cout << "析构函数！" << endl;
//	}
//
//public:
//	int age;
//};
//
////2.构造函数的三种调用方式：
////调用无参构造函数
//void test01()
//{
//	//1.括号法
//	//Person p1;//默认构造函数调用
//	//Person p2(10);//有参构造函数
//	//Person p3(p2);//拷贝构造函数
//	//注意事项：
//	//调用默认构造函数的时候，不要加()
//	//因为下面这行代码，编译器会认为是一个函数的声明，不会认为在创建对象
//	//Person p1();
//
//	//cout << "p2的年龄为：" << p2.age << endl;
//	//cout << "p3的年龄为：" << p3.age << endl;
//
//	//2.显示法
//	//Person p1;
//	//Person p2 = Person(10);//有参构造
//	//Person p3 = Person(p2);//拷贝构造
//
//	//Person(10);//匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
//	//cout << "aaaaa" << endl;
//
//	//注意事项2：
//	//不要利用拷贝的函数初始化匿名对象 初始化匿名对象 编译器会认为Person(p3)==Person p3;对象的声明
//	Person(p3);
//
//	//3.隐式转换法
//	Person p4 = 10;//相当于 写了 Person p4=Person(10); 有参构造
//	Person p5 = p4;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}