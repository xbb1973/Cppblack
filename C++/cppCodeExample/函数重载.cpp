//#include<iostream>
//using namespace std;
//
////1.引用作为重载条件
//
//void func(int& a)
//{
//	cout << "func(int& a)的引用" << endl;
//}
//
//void func(const int& a)
//{
//	cout << "func(const int& a)的引用" << endl;
//}
//
//int func2(int a, int b = 10)
//{
//	return a + b;
//}
//
////int func2(int a, int b, int c = 10)
////{
////	return a + b + c;
////}
//
//int main()
//{
//	func(5);
//	int m=func2(10,5);
//	//int n=func2(10, 10, 20);
//
//	cout << m << endl;
//	//cout << n << endl;
//
//	system("pause");
//	return 0;
//}