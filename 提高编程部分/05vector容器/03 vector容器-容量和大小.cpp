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
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ=" << v1.capacity() << endl;
//		cout << "v1�Ĵ�С=" << v1.size() << endl;
//	}
//
//	//resize����ָ����С ��ָ���ĸ��� Ĭ����0�����λ�� �����������ذ汾�滻Ĭ�����
//	v1.resize(15, 10);//����ָ��Ϊ����Ϊ15 ����������10���
//	printVector(v1);
//
//	//resize ����ָ����С ��ָ���ĸ�С ��������Ԫ�ر�ɾ��
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