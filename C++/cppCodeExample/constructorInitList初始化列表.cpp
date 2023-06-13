#include<iostream>
using namespace std;

class A{
public:
	int a;
	A() {
		cout << "A()" << endl;
	}
	A(int a) {
		this->a = a;
	}
	A(A &a) {
		this->a = a.a;
	}
};

class B{
public:
	int b;
	// B() {
	// 	cout << "B()" << endl;
	// }
	B(int a):b(a) {
		
	}
	B(B &a) {
		this->b = a.b;
	}
};

class C1{
public:
	int c;
	C1() {
		cout << "C()" << endl;
	}
	C1(int a):c(a) {
		
	}
	C1(C1 &a) {
		this->c = a.c;
	}
};

//初始化列表
class Person
{
public:
	// Person() {

	// }

	//传统初始化操作
	// Person(A a, B b, C1 )
	// {
	// 	m_A = a;
	// 	m_B = b;
	// 	m_C = c;
	// }

	//初始化列表初始化属性
	Person(A &a, B &b, C1 &c)
	{
		// when constructor running without initList
		// will init Object with their default contructor
		// default with no parameter constructor m_A(), m_B(), m_C()
		// m_A = A()
		// m_B = B()
		// m_C = C()
		// then run operator= a,b,c
		m_A = a;
		m_B = b;
		m_C = c;
	}

	// Person(A &a, B &b, C1 &c) :m_A(a), m_B(b), m_C(c)
	// {
		
	// }

	//初始化列表初始化属性
	// Person(A a, B b, C1 c) :m_A(a), m_B(b), m_C(c)
	// {

	// }

	B m_B;
	A m_A;
	C1 m_C;
};

void test01()
{
	//Person p(10, 20, 30);
	A a(10);
	B b(20);
	C1 c(30);
	Person p(a, b , c);
	cout << "m_A=" << p.m_A.a << endl;
	cout << "m_B=" << p.m_B.b << endl;
	cout << "m_C=" << p.m_C.c << endl;
}


int main()
{
	test01();

	system("pause");
	return 0;
}