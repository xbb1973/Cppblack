//#include<iostream>
//using namespace std;
////递减运算符的重载
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//重载前置--   先减后用，返回减完的就行
//	MyInteger operator--()
//	{
//		//先进行--运算
//		m_Num--;
//
//		//将自身做一个返回
//		return *this;
//	}
//
//	//重载后置--   先用后减，减完再用 
//
//	MyInteger operator--(int)
//	{
//		//先记录当前结果
//		MyInteger temp = *this;
//		//后 递减
//		m_Num--;
//
//		//最后将记录结果返回
//		return temp;
//	}
//private:
//	int m_Num;
//};
//
////重载左移运算符<<
//ostream& operator<<(ostream &cout,MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//
////前置--测试（先减后用）
//void test01()
//{
//	MyInteger myInt;
//	cout << --myInt << endl;
//	cout << myInt << endl;
//}
//
////后置--测试（先用后减）
//void test02()
//{
//	MyInteger myInt;
//	cout << myInt-- << endl;
//	cout << myInt << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}