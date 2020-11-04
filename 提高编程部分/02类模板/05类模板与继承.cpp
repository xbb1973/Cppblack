//#include<iostream>
//using namespace std;
//
//template<class T>
//class Base
//{
//	T m;
//};
//
//class Son :public Base<int>
//{
//
//};
//void test01()
//{
//	Son c;
//}
//
////类模板继承类模板 可以用T2指定父类中的T类型
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//	T1 obj;
//public:
//	Son2()
//	{
//		cout << typeid(T1).name() << endl;
//		cout << typeid(T2).name() << endl;
//	}
//};
//
//void test02()
//{
//	Son2<int, char> child1;
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}