//#include<iostream>
//using namespace std;
////������
//class Animal
//{
//public:
//	int m_Age;
//};
////������̳� ������μ̳е�����
////
////����
//class Sheep:virtual public Animal{};
//
////����
//class Tuo:virtual public Animal{};
//
////������
//class SheepTuo:public Tuo,public Sheep{};
//
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 18;//
//	st.Tuo::m_Age = 28;
//	//�����μ̳� ��������ӵ����ͬ������ ��Ҫ��������������
//	cout << "st.sheep::m_age=" << st.Sheep::m_Age << endl;
//	cout << "st.sheep::m_age=" << st.Tuo::m_Age << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}