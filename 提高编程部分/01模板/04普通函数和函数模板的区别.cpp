//#include<iostream>
//using namespace std;
//
////��ͨ�����ͺ���ģ�������
//
////1.��ͨ�������ÿ��Է�����ʽ����ת��
////2.����ģ�� ���Զ������Ƶ� �����Է�����ʽ����ת��
////3.����ģ�� ����ʾָ������ ���Է�����ʽ����ת��
//
////��ͨ����
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////����ģ��
//template<class T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	cout << myAdd01(a, c) << endl;//��ͨ�����Զ��Ľ��ַ�cת��Ϊint�ͼ���
//	//cout << myAdd02(a, c) << endl;//����ģ�岻�ܽ��ַ�cת��Ϊint�ͼ���
//	
//	//��ʽָ������
//	cout << myAdd02<int>(a, c)<< endl;//����ģ�� ����ʾָ������ ���Է�����ʽ����ת��
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}