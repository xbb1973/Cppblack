//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////�º��� ����ֵ������bool ��Ϊν��
////һԪν��
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//���������д���5������
//	//GreaterFive() �����ĺ�������
//	vector<int>::iterator it= find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "û�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�:" << *it << endl;
//	}
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}