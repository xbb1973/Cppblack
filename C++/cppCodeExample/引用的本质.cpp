//#include<iostream>
//using namespace std;
//
//void showValue(const int& val)
//{
//	//val = 1000;//加上const之后，就不能修改数据了 防止产生误操作
//	cout << "val=" << val << endl;
//}
//
//int main()
//{
//	//常量引用
//	//使用场景：用来修饰形参，防止误操作
//
//	//int a = 10;
//
//	//
//    //int& ref = 10;//引用必须引一块合法的内存空间   这条语句错误
//	//将上条语句加上const之后 相当于编译器将代码修改为 int temp=10; const int &ref=temp;
//	//const int& ref = 10;//引用一块合法的内存空间
//	
//	int a = 100;
//	showValue(a);
//	cout << "a="<<a << endl;
//
//	system("pause");
//	return 0;
//}