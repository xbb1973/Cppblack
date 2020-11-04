//#include<iostream>
//using namespace std;
////动物类
//class Animal
//{
//public:
//	int m_Age;
//};
////利用虚继承 解决菱形继承的问题
////
////羊类
//class Sheep:virtual public Animal{};
//
////驼类
//class Tuo:virtual public Animal{};
//
////羊驼类
//class SheepTuo:public Tuo,public Sheep{};
//
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 18;//
//	st.Tuo::m_Age = 28;
//	//当菱形继承 两个父类拥有相同的数据 需要加以作用域区分
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