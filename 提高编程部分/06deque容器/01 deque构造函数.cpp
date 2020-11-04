//#include<iostream>
//#include<deque>
//using namespace std;
//
////打印函数
//void printDeque(deque<int> &d1)
//{
//	for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////deque构造
//void test01()
//{
//	deque<int> d1;//无参构造函数
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	cout << "默认构造方式";
//	printDeque(d1);
//
//	//拷贝一个范围
//	deque<int>d2(d1.begin(), d1.end());
//	cout << "deque(beg, end):";
//	printDeque(d2);
//
//	//赋值n个element
//	deque<int>d3(10, 100);
//	cout << "deque(n, elem):";
//	printDeque(d3);
//
//	//拷贝构造函数
//	deque<int>d4 = d3;
//	printDeque(d4);
//
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}