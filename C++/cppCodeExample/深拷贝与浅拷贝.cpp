//#include<iostream>
//using namespace std;
//
////�����ǳ����
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//
//	Person(int age, int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);//�������ڶ���������
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//
//	//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
//	Person(const Person& p)
//	{
//		cout << "Person �������캯���ĵ���" << endl;
//		//m_Height = p.m_Height;������Ĭ��ʵ�־������д���
//		//�������
//
//		m_Height=new int(*p.m_Height);
//	}
//
//
//	~Person()
//	{
//		//�������� �����������������ͷŲ���
//		if (m_Height != NULL)//���ָ��Ĳ�Ϊ�� 
//		{
//			delete m_Height;//�ͷ�����ڴ�
//			m_Height = NULL;
//		}
//		cout << "Person��������������" << endl;
//	}
//	int m_Age;//����
//	int* m_Height;//
//};
//
//void test01()
//{
//	Person p1(18,160);
//	cout << "p1������Ϊ��" << p1.m_Age<<"���Ϊ��"<<*p1.m_Height << endl;
//	
//	Person p2(p1);
//	//ǳ���� �����ĺ�ԭ����ָ��ͬһ���ڴ� �ͷ�һ��������ͷ���һ���ᵼ�´���
//	cout << "p2������Ϊ��" << p2.m_Age << "���Ϊ��" << *p2.m_Height << endl;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}