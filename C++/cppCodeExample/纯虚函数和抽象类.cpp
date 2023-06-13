//#include<iostream>
//using namespace std;
//
////纯虚函数和抽象类
//class Base
//{
//public:
//	//纯虚函数
//	//只要有一个纯虚函数 这个类就称为抽象类
//	//抽象类特点：
//	//1.无法实例化对象
//	//2.抽象类的子类 必须重写父类的纯虚函数 否则也属于抽象类
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//};
//
//void test01()
//{
//	//Base b;//不管是在栈里还是堆里 都没办法实例化对象
//	//new Base;
//}
//int main()
//{
//
//	system("pause");
//	return 0;
//}