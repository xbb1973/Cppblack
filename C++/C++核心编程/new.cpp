//#include<iostream>
//using namespace std;
//
////1.new的基本语法
//int* func()
//{
//	//在堆区创建整型数据
//	//new返回的是 该数据类型的指针
//	int* p = new int(10);//new的是什么数据类型 返回的就是什么数据类型的指针
//	return p;
//}
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	//堆区的数据都是由程序员管理开辟 管理释放
//	//如果想释放 利用关键字delete
//	delete p;
//	//cout << *p << endl;
//}
////2.在堆区利用new开辟数组
//void test02()
//{
//	//在堆区创建10个整形数据数值
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;//给10个元素赋值 100~109
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		cout << arr[j] << endl;
//	}
//
//	//释放堆区数组
//	//释放数组的时候 要加[]才可以
//	delete[] arr;//
//}
//
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}