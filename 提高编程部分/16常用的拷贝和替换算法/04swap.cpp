//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
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
//	vector<int>v1, v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 1);
//	}
//
//	cout << "交换前v1为：";
//	for_each(v1.begin(), v1.end(),Print());
//	cout << endl;
//	cout << "交换前v2为：";
//	for_each(v2.begin(), v2.end(), Print());
//	swap(v1, v2);
//	cout << endl;
//	cout << "交换后v1为：";
//	for_each(v1.begin(), v1.end(), Print());
//	cout << endl;
//	cout << "交换后v2为：";
//	for_each(v2.begin(), v2.end(), Print());
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