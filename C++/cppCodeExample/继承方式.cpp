//#include<iostream>
//using namespace std;
//
////�̳з�ʽ
//
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////�����̳�
//class Son1 :public Base1
//{
//	void func()
//	{
//		m_A = 10;//�����й���Ȩ�޳�Ա ������������Ϊ����Ȩ��
//		m_B = 10;//�����б���Ȩ�޳�Ա ������������Ϊ����Ȩ��
//		//m_C = 10;//������˽��Ȩ������ �������в��ɷ���
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 10;
//}
//
////�����̳�
//class Son2 :protected Base1
//{
//	void func()
//	{
//		m_A = 10;//�����̳м̳�����ȫΪ����Ȩ��
//		m_B = 10;
//		//m_C = 10;
//	}
//};
//void test01()
//{
//	Son2 s2;
//	
//}
//
////˽�м̳�
//class Son3 :protected Base1
//{
//	void func()
//	{
//		m_A = 10;//�����̳м̳�����ȫΪ����Ȩ��
//		m_B = 10;
//		//m_C = 10;
//	}
//};
//void test01()
//{
//	Son3 s3;
//	
//}
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}