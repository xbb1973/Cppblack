//#include<iostream>
//using namespace std;
//
////1.new�Ļ����﷨
//int* func()
//{
//	//�ڶ���������������
//	//new���ص��� ���������͵�ָ��
//	int* p = new int(10);//new����ʲô�������� ���صľ���ʲô�������͵�ָ��
//	return p;
//}
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	//���������ݶ����ɳ���Ա������ �����ͷ�
//	//������ͷ� ���ùؼ���delete
//	delete p;
//	//cout << *p << endl;
//}
////2.�ڶ�������new��������
//void test02()
//{
//	//�ڶ�������10������������ֵ
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;//��10��Ԫ�ظ�ֵ 100~109
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		cout << arr[j] << endl;
//	}
//
//	//�ͷŶ�������
//	//�ͷ������ʱ�� Ҫ��[]�ſ���
//	delete[] arr;//
//}
//
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}