//#include<iostream>
//#include<deque>
//using namespace std;
//
////��ӡ����
//void printDeque(deque<int> &d1)
//{
//	for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////deque����
//void test01()
//{
//	deque<int> d1;//�޲ι��캯��
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	cout << "Ĭ�Ϲ��췽ʽ";
//	printDeque(d1);
//
//	//����һ����Χ
//	deque<int>d2(d1.begin(), d1.end());
//	cout << "deque(beg, end):";
//	printDeque(d2);
//
//	//��ֵn��element
//	deque<int>d3(10, 100);
//	cout << "deque(n, elem):";
//	printDeque(d3);
//
//	//�������캯��
//	deque<int>d4 = d3;
//	printDeque(d4);
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