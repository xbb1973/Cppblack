//#include<iostream>
//using namespace std;
//
////��������
//
////1.ֵ����
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "swap01 a=" << a << endl;
//	cout << "swap01 b=" << b << endl;
//}
////2.��ַ����
//void mySwap02(int *a,int *b)
//{
//	int temp = *a;//a����ַ  *a����ַ�������
//	*a = *b;
//	*b = temp;
//	cout << "swap02 a=" << *a << endl;
//	cout << "swap02 b=" << *b << endl;
//}
////3.���ô���
//void mySwap03(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "swap03 a=" << a << endl;
//	cout << "swap03 b=" << b << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//mySwap01(a, b);//ֵ���ݣ��ββ�������ʵ��
//	//mySwap02(&a, &b);//��ַ����
//	mySwap03(a, b);//���ô���
//
//	cout <<"a="<< a << endl;
//	cout <<"b="<< b << endl;
//
//	system("pause");
//	return 0;
//}