//#include<iostream>
//using namespace std;
//#include<vector>
//
//void printVector(vector<int> &v1)
//{
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////vector容器构造
//void test01()
//{
//	vector<int>v1;//默认构造 无参构造
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//利用区间方式进行构造
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	vector<int> v3(10, 100);
//	printVector(v3);
//
//	vector<int> v4(v3);
//	printVector(v4);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}