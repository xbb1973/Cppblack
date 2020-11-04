//#include<iostream>
//#include<deque>
//using namespace std;
//
//
////打印函数
//void printDeque(const deque<int> &d1)
//{
//	for (deque<int>::const_iterator it = d1.begin(); it != d1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////大小操作
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//判断容器是否为空
//	if (d1.empty())
//	{
//		cout << "d1为空！" << endl;
//	}
//	else
//	{
//		cout << "d1的大小为：" << d1.size() << endl;
//	}
//
//	//重新指定大小
//	d1.resize(15, 1);
//	cout << "扩大了大小";
//	printDeque(d1);
//
//	d1.resize(5);
//	cout << "缩小了大小";
//	printDeque(d1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}