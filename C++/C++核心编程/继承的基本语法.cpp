//#include<iostream>
//using namespace std;
//
////普通实现页面
////Java页面
////class Java
////{
////public:
////	void header()
////	{
////		cout << "首页/公开课/登录....（公共的头部）" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心/交流合作（公共底部信息）" << endl;
////	}
////	void left()
////	{
////		cout << "Java Python C++....（公共的分类列表）" << endl;
////	}
////	void content()
////	{
////		cout << "Java学科视频" << endl;
////	}
////};
//
//
////继承实现页面
//
////公共页面类
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页/公开课/登录....（公共的头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心/交流合作（公共底部信息）" << endl;
//	}
//	void left()
//	{
//		cout << "java python c++....（公共的分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "java学科视频" << endl;
//	}
//};
////继承的好处
////语法：class 子类：继承方式 父类
////子类 也称为 派生类
////父类 也称为 基类
//
////Java页面
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
////Python界面
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++界面
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPP学科视频" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Java下载视频页面如下：" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//
//	cout << "Python下载视频页面如下：" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//
//	cout << "C++下载视频页面如下：" << endl;
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