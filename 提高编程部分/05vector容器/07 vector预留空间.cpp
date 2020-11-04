//#include<iostream>
//#include<vector>
//using namespace std;
//
//void test01()
//{
//	vector<int> v;
//	
//	//预留空间
//	//v.reserve(100000);
//
//	int num = 0;
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])//将p指向v的首地址 每次如果扩展内存 原来指的地方可能就不是首地址了 
//			           //这时候就会运行这段代码 使得num加一
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//
//	cout << "num:" << num << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}