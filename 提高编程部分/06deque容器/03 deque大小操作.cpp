//#include<iostream>
//#include<deque>
//using namespace std;
//
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
////��С����
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//�ж������Ƿ�Ϊ��
//	if (d1.empty())
//	{
//		cout << "d1Ϊ�գ�" << endl;
//	}
//	else
//	{
//		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
//	}
//
//	//����ָ����С
//	d1.resize(15, 1);
//	cout << "�����˴�С";
//	printDeque(d1);
//
//	d1.resize(5);
//	cout << "��С�˴�С";
//	printDeque(d1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}