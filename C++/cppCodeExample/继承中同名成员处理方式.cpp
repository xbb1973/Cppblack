//#include<iostream>
//using namespace std;
//
////�̳���ͬ����Ա����ʽ
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base�µ�func�����ĵ���" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base-func(int a)�ĵ���" << endl;
//	}
//	int m_A;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son�µ�func�����ĵ���" << endl;
//	}
//	int m_A;
//};
////ͬ����Ա���ԵĴ���ʽ
//void test01()
//{
//	Son s;
//	cout << "s.m_A=" << s.m_A << endl;
//	cout << "Base�µ�s.m_A=" << s.Base::m_A << endl;
//	//s.func();
//	s.Base::func();
//}
////ͬ�������Ĵ���ʽ
//void test02()
//{
//	Son s;
//	s.func();//ֱ�ӵ����������ͬ����Ա
//
//	//���õ������е�ͬ����Ա������
//	s.Base::func();
//
//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ������
//	//�������ʵ������б����ص�ͬ����Ա���� ��Ҫ��������
//	s.Base::func(100);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}