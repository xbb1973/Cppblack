//#include<iostream>
//using namespace std;
//
////��ͨ�����ͺ���ģ����ù���
////1.�������ģ�����ͨ���������Ե��� ���ȵ�����ͨ����
////2.����ͨ����ģ������б� ǿ�Ƶ��ú���ģ��
////3.����ģ����Է�����������
////4.�������ģ����Բ������õ�ƥ�� ���ȵ��ú���ģ��
//
//void myPrint(int a, int b)
//{
//	cout << "���õ���ͨ����" << endl;
//} 
//
//template<typename T>
//void myPrint(T a, T b)
//{
//	cout << "���õ�ģ��" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b,T c)
//{
//	cout << "���õ����ص�ģ��" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//1.���ȵ�����ͨ����
//	//myPrint(a, b);
//
//	//2.ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
//	//myPrint<>(a, b);
//
//	//3.����ģ��Ҳ���Է�������
//	//myPrint(a, b, 100);
//
//	//4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}