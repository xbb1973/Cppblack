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
//	cout << "����ǰv1Ϊ��";
//	for_each(v1.begin(), v1.end(),Print());
//	cout << endl;
//	cout << "����ǰv2Ϊ��";
//	for_each(v2.begin(), v2.end(), Print());
//	swap(v1, v2);
//	cout << endl;
//	cout << "������v1Ϊ��";
//	for_each(v1.begin(), v1.end(), Print());
//	cout << endl;
//	cout << "������v2Ϊ��";
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