//#include<iostream>
//#include<algorithm>
//using namespace std;
//#include<vector>
//
//void MyPrint(int val)
//{
//	cout << val << endl;
//}
//
////vector�������������������
//void test01()
//{
//	//������һ��vector���� ������Ϊ��һ������
//	vector<int> v;
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//ͨ�����������������е�����
//	////v.begin()����ʼ������ ָ�������е�һ��Ԫ��
//	////���������Ա���Ϊ������ָ��
//	//vector<int>::iterator itBegin = v.begin();//��ʼ������ ָ�������е�һ��Ԫ��
//	//vector<int>::iterator itEnd = v.end();//���������� ָ�����������һ��Ԫ�ص���һ��λ��
//
//	////��һ�ֱ�����ʽ
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	////�ڶ��ֱ�����ʽ
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	//�����ֱ�����ʽ
//	//ʹ��STL�ṩ��׼�����㷨 ͷ�ļ� algorithm
//	for_each(v.begin(), v.end(), MyPrint);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}