//#include<iostream>
//using namespace std;
//
////��C++�� ���ڵĳ�Ա�����ͳ�Ա�����ֿ��洢
////ֻ�зǾ�̬��Ա������������Ķ�����
//
//class Person
//{
//public:
//	Person()
//	{
//		mA = 0;
//	}
//	//�Ǿ�̬��Ա����ռ����ռ�
//	int mA;
//	//��̬��Ա������ռ����ռ�
//	static int mB;
//	//�Ǿ�̬��Ա����Ҳ��ռ����ռ� ���к�������һ������ʵ��
//	void func()
//	{
//		cout << "mA:" << this->mA << endl;
//	}
//	//��̬��Ա����Ҳ��ռ����ռ�
//	static void sfunc()
//	{
//
//	}
//
//};
//
//int Person::mB = 0;
//
//void test01()
//{
//	Person p;
//	//�ն���ռ���ڴ�ռ�Ϊ��1
//	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ� ��Ϊ�����ֿն���ռ�ڴ��λ��
//	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
//	cout << "size of p=" << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//	cout << "size of p=" << sizeof(p) << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}