//#include<iostream>
//#include<string>
//using namespace std;
//
////函数调用运算符重载
//
////打印输出类
//class MyPrint
//{
//public:
//	//重载函数调用运算符
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//class Add
//{
//public:
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//
//void test01()
//{
//	MyPrint myPrint;
//	myPrint("hello world");//由于使用起来非常类似于函数调用 因此称为仿函数
//}
//
////仿函数非常灵活 没有固定的写法
////加法类
//void test02()
//{
//	Add p;
//	cout << p(10, 20) << endl;
//
//	//匿名函数对象
//	cout << Add()(100, 200) << endl;
//
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}