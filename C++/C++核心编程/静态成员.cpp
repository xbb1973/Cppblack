//#include<iostream>
//using namespace std;
//
////��̬��Ա����
//
//class Person
//{
//public:
//	static int m_A;//��̬��Ա����
//
//	//��̬��Ա�����ص㣺
//	//1.�ڱ���׶η����ڴ�
//	//2.�������� �����ʼ��
//	//3.���ж�����ͬһ������
//
//private:
//	static int m_B;//��̬��Ա����Ҳ�з���Ȩ��
//};
//
//int Person::m_A = 10;//��̬��Ա������ֵ��ʽ֮һ ͨ�����͸�ֵ
//int Person::m_B = 10;
//
//void test01()
//{
//	//��̬��Ա�������ַ��ʷ�ʽ
//
//	//1.ͨ������
//	Person p1;
//	p1.m_A = 100;
//	cout << "p1.m_A" << p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	//�������������Ʒֱ�Ϊp1��p2����Ķ��� ���ڶ�������ֵ��ʱ�� �ı������о�̬��Ա��ֵ
//	cout << "p1.m_A=" << p1.m_A << endl;//����ͬһ������
//	cout << "p2.m_A=" << p2.m_A << endl;
//
//	//2.ͨ������
//	//cout << "m_A=" << Person::m_A << endl;
//
//	
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}