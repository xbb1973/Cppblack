//#include<iostream>
//using namespace std;
//#include<string>//����ַ�����Ҫ��ǰ�����string��ͷ�ļ�
//
////��Ա��������Ϊ˽��
////1.�����Լ����ƶ�дȨ��
////2.����д���Լ�����ݵ���Ч��
//
//class Person
//{
//public:
//	//��������
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//��ȡ����
//	string getName()
//	{
//		return m_Name;
//	}
//	
//	//��������
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "��������Чֵ" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//��ȡ����  
//	int getAge()
//	{
//		m_Age = 0;
//		return m_Age;
//	}
//	//�������� ֻд
//	void setLover(string name)
//	{
//		m_Lover = name;
//	}
//
//private:
//	//���� �ɶ���д
//	string m_Name;
//	//���� ֻ��
//	int m_Age;
//	//���� ֻд
//	string m_Lover;
//
//};
//
//int main()
//{
//	Person p;
//	p.setName("����");
//	p.setAge(1000);
//	cout << "����Ϊ��" << p.getName() << endl;
//	cout << "����Ϊ��" << p.getAge() << endl;
//
//	system("pause");
//	return 0;
//}