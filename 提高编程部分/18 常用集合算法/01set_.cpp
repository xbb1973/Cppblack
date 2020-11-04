//
//////求两个容器的交集
////#include<iostream>
////#include<vector>
////#include<algorithm>
////using namespace std;
////
////class Print
////{
////public:
////	void operator()(int val)
////	{
////		cout << val << " ";
////	}
////};
////
////void test01()
////{
////	vector<int> v1;
////	vector<int> v2;
////	for (int i = 0; i < 10; i++)
////	{
////		v1.push_back(i);
////		v2.push_back(i + 5);
////	}
////
////	vector<int>v;
////	v.resize(min(v1.size(), v2.size()));
////	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
////	for_each(v.begin(),itEnd, Print());
////
////	cout<<endl;
////}
////
////int main()
////{
////	test01();
////
////	system("pause");
////	return 0;
////}
//
////求两个容器的并集
////#include<iostream>
////#include<vector>
////#include<algorithm>
////using namespace std;
////
////class Print
////{
////public:
////	void operator()(int val)
////	{
////		cout << val << " ";
////	}
////};
////
////void test01()
////{
////	vector<int> v1;
////	vector<int> v2;
////	for (int i = 0; i < 10; i++)
////	{
////		v1.push_back(i);
////		v2.push_back(i + 5);
////	}
////
////	vector<int>v;
////	v.resize(v1.size()+v2.size());
////	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
////	for_each(v.begin(), itEnd, Print());
////
////	cout<<endl;
////}
////
////int main()
////{
////	test01();
////
////	system("pause");
////	return 0;
////}
//
////求两个容器的差集
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Print
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int>v;
//	v.resize(min(v1.size(), v2.size()));
//	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
//	for_each(v.begin(), itEnd, Print());
//
//	cout<<endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
