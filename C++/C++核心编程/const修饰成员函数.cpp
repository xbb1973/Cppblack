//#include<iostream>
//using namespace std;
//
////������
//class Person
//{
//public:
//	//thisָ��ı�����ָ�볣�� ָ���ָ���ǲ����Ա��޸ĵ�
//	//const Person*const this:
//	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�����Ա��޸�
//	void showPerson() const
//	{
//		this->m_B = 100;
//		//this->m_A = 100;
//		//this = NULL;//thisָ�벻�����޸�ָ���ָ��
//	}
//
//	void func()
//	{
//
//	}
//
//	int m_A;
//	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ �ӹؼ���mutable
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
////������
//void test02()
//{
//	const Person p;//�ڶ���ǰ���const����Ϊ������
//	//p.m_A = 100;
//	p.m_B = 100;//m_B������ֵ���ڳ�������Ҳ�����޸�
//	
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//	//p.func();//�����󲻿��Ե�����ͨ��Ա���� ��Ϊ��ͨ��Ա���������޸����� �������������޸�
//}
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}