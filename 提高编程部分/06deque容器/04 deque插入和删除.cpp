//#include<iostream>
//#include<deque>
//using namespace std;
//
////��ӡ����
//void printDeque(const deque<int> &d1)
//{
//	for (deque<int>::const_iterator it = d1.begin(); it != d1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d;
//	//β��
//	d.push_back(10);
//	d.push_back(20);
//	//ͷ��
//	d.push_front(100);
//	d.push_front(200);
//
//	printDeque(d);
//
//	//βɾ
//	d.pop_back();
//	printDeque(d);
//
//	//ͷɾ
//	d.pop_front();
//	printDeque(d);
//}
//
////����
//void test02()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	printDeque(d);
//
//	d.insert(d.begin(), 1000);
//	printDeque(d);
//
//	d.insert(d.begin(), 2,10000);
//	printDeque(d);
//
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d.insert(d.begin(), d2.begin(), d2.end());//��d2�Ŀ�ͷ����β�����ֲ��뵽d�Ŀ�ͷ
//	printDeque(d);
//}
//
//void test03()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	printDeque(d);
//
//	d.erase(d.begin());
//	printDeque(d);
//
//	//d.erase(d.begin(), d.end());
//	d.clear();
//	printDeque(d);
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//	return 0;
//}