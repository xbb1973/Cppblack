//#include<iostream>
//#include<vector>
//using namespace std;
//
////对vector容器进行插入和删除
//
////打印函数
//void printVector(vector<int> &v1)
//{
//	for(vector<int>::iterator it = v1.begin(); it!= v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////测试
//void test01()
//{
//	vector<int> v1;
//	//尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//	
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//
//	//插入
//	v1.insert(v1.begin(), 100);//在开始插入100
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);//在开始插入两个1000
//	printVector(v1);
//
//	//删除
//	v1.erase(v1.begin());//删除最开始的元素
//	printVector(v1);
//
//	//清空
//	//v1.erase(v1.begin(), v1.end());
//	v1.clear();
//	printVector(v1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}