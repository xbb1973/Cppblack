//#include<iostream>
//#include<functional>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(20);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
//	{
//		cout << *it << " ";
//	} 
//	cout << endl;
//
//	//自己实现仿函数
//	//sort(v.begin(),v.end(),MyCompare());
//	//STL内建仿函数 大于仿函数
//	sort(v.begin(), v.end(),greater<int>());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	sort(v.begin(), v.end(), less<int>());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}