//#include<iostream>
//#include<vector>
//using namespace std;
//
////��vector�������в����ɾ��
//
////��ӡ����
//void printVector(vector<int> &v1)
//{
//	for(vector<int>::iterator it = v1.begin(); it!= v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////����
//void test01()
//{
//	vector<int> v1;
//	//β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//	
//	//βɾ
//	v1.pop_back();
//	printVector(v1);
//
//	//����
//	v1.insert(v1.begin(), 100);//�ڿ�ʼ����100
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);//�ڿ�ʼ��������1000
//	printVector(v1);
//
//	//ɾ��
//	v1.erase(v1.begin());//ɾ���ʼ��Ԫ��
//	printVector(v1);
//
//	//���
//	//v1.erase(v1.begin(), v1.end());
//	v1.clear();
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