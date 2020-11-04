//#include<iostream>
//#include<map>
//using namespace std;
//
//void printMap(map<int, int> &m1)
//{
//	for (map<int, int>::iterator it = m1.begin(); it != m1.end(); it++)
//	{
//		cout << "键值为：" << it->first << " 内容为：" << it->second;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int>m1;
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(3, 30));
//
//	if (m1.empty())
//	{
//		cout << "该容器为空！" << endl;
//	}
//	else
//	{
//		cout << "该容器大小为：" << m1.size() << endl;
//	}
//
////交换
//	map<int, int>m2;
//	m2.insert(pair<int, int>(1, 100));
//	m2.insert(pair<int, int>(2, 200));
//	m2.insert(pair<int, int>(3, 300));
//
//	cout << "交换前 m1=" << endl;
//	printMap(m1);
//
//	cout << "交换前 m2=" << endl;
//	printMap(m2);
//
//	m2.swap(m1);
//	cout << "交换后 m1=" << endl;
//	printMap(m1);
//
//	cout << "交换后 m2=" << endl;
//	printMap(m2);
//
//}
//
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}