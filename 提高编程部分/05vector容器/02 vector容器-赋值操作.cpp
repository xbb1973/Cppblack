//#include<iostream>
//using namespace std;
//#include<vector>
//
////��ӡ
//void printVector(vector<int>& v1)
//{
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it <<" ";
//	}
//	cout << endl;
//}
//
////vector��ֵ
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	//���صȺŸ�ֵ
//	vector<int>v2;
//	v2 = v1;
//	printVector(v2);
//
//	//���丳ֵ
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	//����n��ֵ �� ��ֵ
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//
//
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}