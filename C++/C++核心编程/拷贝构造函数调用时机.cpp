#include<iostream>
using namespace std;

//�������캯������ʱ��

//1.ʹ��һ���Ѿ�������ɵĶ�������ʼ��һ���¶���

//2.ֵ���ݵķ�ʽ������������ֵ

//3.ֵ��ʽ���ؾֲ�����

class Person
{
public:
	Person()
	{
		cout << "PersonĬ�Ϲ��캯���ĵ���" << endl;
	}

	Person(int age)
	{
		cout << "Person�вι��캯������" << endl;
		m_Age = age;
	}
	Person(const Person& p)
	{
		cout << "Person�������캯���ĵ���" << endl;
		m_Age = p.m_Age;
	}
	~Person()
	{
		cout << "Person���������ĵ���" << endl;
	}

public:
	int m_Age;

};

void test01()
{
	Person p1(20);
	Person p2(p1);

	cout << "P2������Ϊ��" << p2.m_Age << endl;
}

//2.ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p)
{

}

void test02()
{
	Person p;
	doWork(p);
}

//3.ֵ��ʽ���ؾֲ�����
Person doWork2()
{
	Person p1;
	return p1;
}
void test03()
{
	Person p = doWork2();
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}