//#include<iostream>
//using namespace std;
////�ݼ������������
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//����ǰ��--   �ȼ����ã����ؼ���ľ���
//	MyInteger operator--()
//	{
//		//�Ƚ���--����
//		m_Num--;
//
//		//��������һ������
//		return *this;
//	}
//
//	//���غ���--   ���ú������������ 
//
//	MyInteger operator--(int)
//	{
//		//�ȼ�¼��ǰ���
//		MyInteger temp = *this;
//		//�� �ݼ�
//		m_Num--;
//
//		//��󽫼�¼�������
//		return temp;
//	}
//private:
//	int m_Num;
//};
//
////�������������<<
//ostream& operator<<(ostream &cout,MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//
////ǰ��--���ԣ��ȼ����ã�
//void test01()
//{
//	MyInteger myInt;
//	cout << --myInt << endl;
//	cout << myInt << endl;
//}
//
////����--���ԣ����ú����
//void test02()
//{
//	MyInteger myInt;
//	cout << myInt-- << endl;
//	cout << myInt << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}