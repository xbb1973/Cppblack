//#include<iostream>
//#include<map>
//using namespace std;
//
//void printMap(map<int, int> &m1)
//{
//	for (map<int, int>::iterator it = m1.begin(); it != m1.end(); it++)
//	{
//		cout << "��ֵΪ��" << it->first << " ����Ϊ��" << it->second;
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
//		cout << "������Ϊ�գ�" << endl;
//	}
//	else
//	{
//		cout << "��������СΪ��" << m1.size() << endl;
//	}
//
////����
//	map<int, int>m2;
//	m2.insert(pair<int, int>(1, 100));
//	m2.insert(pair<int, int>(2, 200));
//	m2.insert(pair<int, int>(3, 300));
//
//	cout << "����ǰ m1=" << endl;
//	printMap(m1);
//
//	cout << "����ǰ m2=" << endl;
//	printMap(m2);
//
//	m2.swap(m1);
//	cout << "������ m1=" << endl;
//	printMap(m1);
//
//	cout << "������ m2=" << endl;
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