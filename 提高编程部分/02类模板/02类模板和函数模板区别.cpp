//#include<iostream>
//#include<string>
//using namespace std;
//
////��ģ��ͺ���ģ�������
//template<class NameType, class AgeType=int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	void showPerson()
//	{
//		cout << "name: " << this->m_Name << " age:" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.��ģ��û���Զ������Ƶ�
//void test01()
//{
//	//Person p("�����"��1000);//���� ��ģ��ʹ��ʱ ���������Զ������Ƶ�
//	Person<string, int>p("�����", 1000);//����ʹ����ʾָ�����͵ķ�ʽ ʹ����ģ��
//	p.showPerson();
//}
//
////2.��ģ����ģ������б��п�����Ĭ�ϲ���
////template<class NameType, class AgeType=int>
//void test02()
//{
//	Person<string>p("�����", 1000);
//	p.showPerson();
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}