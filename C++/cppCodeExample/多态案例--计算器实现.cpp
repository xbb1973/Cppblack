//#include<iostream>
//#include<string>
//using namespace std;
//
////�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����
//
////��ͨд��
//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		//�������չ�µĹ��� ��Ҫ�޸�Դ��
//		//����ʵ�Ŀ����� �ᳫ ����ԭ��
//		//����ԭ�򣺶���չ���п��� ���޸Ľ��йر�
//	}
//	int m_Num1;//������1
//	int m_Num2;//������2
//};
//
//void test01()
//{
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 20;
//	cout << c.m_Num1<<"*"<<c.m_Num2 <<"="<< c.getResult("*") << endl;
//	cout << c.m_Num1<<"+"<<c.m_Num2 <<"="<< c.getResult("+") << endl;
//	cout << c.m_Num1<<"-"<<c.m_Num2 <<"="<< c.getResult("-") << endl;
//}
//
//
////���ö�̬��ʵ�м�����
////��̬�ô���
////1 ��֯�ṹ����
////2 �ɶ���ǿ
////3 ǰ���ڵ���չά���Ը�
//
////ʵ�ּ�����������
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int m_Num1;//������1
//	int m_Num2;//������2
//};
//
////�ӷ���������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	 int getResult()
//	{
//		return m_Num1+m_Num2;
//	}
//};
//
////������������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////�˷���������
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test02()
//{
//	//��̬��ʹ������
//	//����ָ���������ָ���������
//
//	//�ӷ�����
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	//new���ٵĶ������� �����ǵ�����
//	delete abc;
//
//	//��������
//	//delete�Ѷ��������ݸ��ͷ��� ������ָ��û�б� ���Ǹ����ָ��
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//	//��������
//	//delete�Ѷ��������ݸ��ͷ��� ������ָ��û�б� ���Ǹ����ָ��
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}