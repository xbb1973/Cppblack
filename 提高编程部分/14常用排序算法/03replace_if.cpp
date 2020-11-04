//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//
//class Max
//{
//public:
//	bool operator()(int n1)
//	{
//		return n1 > 20;
//	}
//};
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
//	vector<int> v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "替换前为：";
//	for_each(v.begin(), v.end(),Print());
//	cout << endl;
//
//	replace_if(v.begin(), v.end(), Max(), 2000);
//	cout << "替换后为：";
//	for_each(v.begin(), v.end(), Print());
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}