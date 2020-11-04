//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////仿函数 返回值类型是bool 称为谓词
////一元谓词
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//查找容器中大于5的数字
//	//GreaterFive() 匿名的函数对象
//	vector<int>::iterator it= find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "没找到！" << endl;
//	}
//	else
//	{
//		cout << "找到:" << *it << endl;
//	}
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}