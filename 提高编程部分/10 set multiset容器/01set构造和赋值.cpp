//#include<iostream>
//#include<set>
//using namespace std;
//
//void printSet(set<int> &s1)
//{
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////构造和赋值
//void test01()
//{
//	set<int> s1;
//
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(10);
//	s1.insert(30);
//	printSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//
//	//赋值
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}