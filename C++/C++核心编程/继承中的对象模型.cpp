//#include<iostream>
//using namespace std;
//
////继承中的对象模型
//
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son :public Base
//{
//public:
//	int m_D;
//};
//void test01()
//{
//	//16
//	//父类中所有非静态成员属性都会被子类继承下去
//	//父类中私有成员属性 是被编译器隐藏了
//	cout << "size of Son=" << sizeof(Son);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}