//#include<iostream>
//#include<map>
//using namespace std;
///*insert(elem); //在容器中插入元素。
//clear(); //清除所有元素
//erase(pos); //删除pos迭代器所指的元素，返回下一个元素的迭代器。
//erase(beg, end); //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
//erase(key); //删除容器中值为key的元素。*/
//void printMap(map<int, int>& m1)
//{
//	for (map<int, int>::iterator it = m1.begin(); it != m1.end(); it++)
//	{
//		cout << "键值为：" << it->first << " 内容为：" << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//插入
//	map<int, int> m;
//	//第一种插入方式
//	m.insert(pair<int, int>(1, 10));
//	//第二种插入方式
//	m.insert(make_pair(2, 20));
//	//第三种插入方式
//	m.insert(map<int, int>::value_type(3, 30));
//	//第四种插入方式
//	m[4] = 40;
//	printMap(m);
//
//
//	//删除
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(2);
//	printMap(m);
//
//	m.erase(m.begin(), m.end());
//	printMap(m);
//
//
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