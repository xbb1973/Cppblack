//#include<iostream>
//#include<vector>
//using namespace std;
//
//void test01()
//{
//	vector<int> v;
//	
//	//Ԥ���ռ�
//	//v.reserve(100000);
//
//	int num = 0;
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])//��pָ��v���׵�ַ ÿ�������չ�ڴ� ԭ��ָ�ĵط����ܾͲ����׵�ַ�� 
//			           //��ʱ��ͻ�������δ��� ʹ��num��һ
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//
//	cout << "num:" << num << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}