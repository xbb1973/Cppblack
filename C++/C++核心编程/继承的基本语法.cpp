//#include<iostream>
//using namespace std;
//
////��ͨʵ��ҳ��
////Javaҳ��
////class Java
////{
////public:
////	void header()
////	{
////		cout << "��ҳ/������/��¼....��������ͷ����" << endl;
////	}
////	void footer()
////	{
////		cout << "��������/���������������ײ���Ϣ��" << endl;
////	}
////	void left()
////	{
////		cout << "Java Python C++....�������ķ����б�" << endl;
////	}
////	void content()
////	{
////		cout << "Javaѧ����Ƶ" << endl;
////	}
////};
//
//
////�̳�ʵ��ҳ��
//
////����ҳ����
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ/������/��¼....��������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "��������/���������������ײ���Ϣ��" << endl;
//	}
//	void left()
//	{
//		cout << "java python c++....�������ķ����б�" << endl;
//	}
//	void content()
//	{
//		cout << "javaѧ����Ƶ" << endl;
//	}
//};
////�̳еĺô�
////�﷨��class ���ࣺ�̳з�ʽ ����
////���� Ҳ��Ϊ ������
////���� Ҳ��Ϊ ����
//
////Javaҳ��
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
////Python����
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++����
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPPѧ����Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Java������Ƶҳ�����£�" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//
//	cout << "Python������Ƶҳ�����£�" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//
//	cout << "C++������Ƶҳ�����£�" << endl;
//	CPP c;
//	c.header();
//	c.footer();
//	c.left();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}