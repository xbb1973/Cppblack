//#include<iostream>
//using namespace std;
//
////�������������
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//	//���ó�Ա�������� ���������  operator<<(cout) �򻯰汾Ϊ��p<<cout;
//	//�������ó�Ա��������<<���������Ϊ�޷�ʵ��  cout�����
//	//void operator<<(Person &p)
//	//{
//
//	//}
//private:
//	int m_A;
//	int m_B;
//};
//
////ֻ�����ó�Ա�����������������
////              coutת�����忴 Ϊostream�� ����ȫ��ֻ�ܶ���һ�� ����������
//ostream& operator<<(ostream &cout, Person& p)   //���ʣ�operator<<(cout,p) �� cout<<p
//{
//	cout << "m_A=" << p.m_A << " m_B=" << p.m_B;
//	return cout;
//}
//
//
//void test01()
//{
//	Person p(10,10);
//
//	//�����൱��һ����ʽ��� << << <<
//	cout << p<<endl;
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}