//#include<iostream>
//using namespace std;
//
//class Cube
//{
//private:
//	double c_L;
//	double c_W;
//	double c_H;
//public:
//	//设置长
//	void setL(int c_long)
//	{
//		c_L = c_long;
//	}
//	//获取长
//	int getL()
//	{
//		return c_L;
//	}
//
//	//设置宽
//	void setW(int c_long)
//	{
//		c_W = c_long;
//	}
//	//获取宽
//	int getW()
//	{
//		return c_W;
//	}
//
//	//设置高
//	void setH(int c_long)
//	{
//		c_H = c_long;
//	}
//	//获取高
//	int getH()
//	{
//		return c_H;
//	}
//
//	int area()
//	{
//		return 2*(c_L * c_W + c_L * c_H + c_W * c_H);
//	}
//	int volume()
//	{
//		return c_L * c_W * c_H;
//	}
//	bool isSameByClass(Cube &c)
//	{
//		if (c_H== c.getH() && c_L == c.getL() && c_W== c.getW())
//		{
//			return true;
//		}
//		return false;
//	}
//};
//
////利用全局函数判断两个立方体是否相等
//bool IsSame(Cube &c1,Cube &c2)
//{
//	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	Cube cube;
//	cube.setH(20);
//	cube.setL(50);
//	cube.setW(10);
//	cout << "该立方体的面积为：" << cube.area() << "。体积为：" << cube.volume() << endl;
//
//	Cube cube2;
//	cube2.setH(20);
//	cube2.setL(50);
//	cube2.setW(11);
//
//	bool j = IsSame(cube, cube2);//利用全局函数判断
//
//	if (j)
//	{
//		cout << "两个立方体相等" << endl;
//	}
//	else
//	{
//		cout << "两个立方体不等" << endl;
//	}
//
//	//利用成员函数判断
//	bool ret = cube.isSameByClass(cube2);
//	if (ret)
//	{
//		cout << "两个立方体相等（成员函数判断）" << endl;
//	}
//	else
//	{
//		cout << "两个立方体不等（成员函数判断）" << endl;
//	}
//
//	system("pause");
//	return 0;
//}