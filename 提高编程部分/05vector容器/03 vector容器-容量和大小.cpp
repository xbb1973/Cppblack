//#include<iostream>
//#include<vector>
//using namespace std;
//
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 1; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	if (v1.empty())
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为=" << v1.capacity() << endl;
//		cout << "v1的大小=" << v1.size() << endl;
//	}
//
//	//resize重新指定大小 若指定的更大 默认用0填充新位置 可以利用重载版本替换默认填充
//	v1.resize(15, 10);//重新指定为长度为15 超出部分用10填充
//	printVector(v1);
//
//	//resize 重新指定大小 若指定的更小 超出部分元素被删除
//	v1.resize(5);
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