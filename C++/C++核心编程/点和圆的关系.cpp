//#include<iostream>
//using namespace std;
//
//class Circle
//{
//private:
//	int radius;//定义半径
//	int c_x;//圆心x坐标
//	int c_y;//圆心y坐标
//public:
//	//设置半径
//	void setRadius(int r)
//	{
//		radius = r;
//	}
//	//获取半径
//	int getRadius()
//	{
//		return radius;
//	}
//
//	//设置圆心x坐标
//	void setC_x(int x)
//	{
//		c_x = x;
//	}
//	//获取圆心x坐标
//	int getC_x()
//	{
//		return c_x;
//	}
//
//	//设置圆心y坐标
//	void setC_y(int y)
//	{
//		c_y = y;
//	}
//	//获取圆心y坐标
//	int getC_y()
//	{
//		return c_y;
//	}
//};
//class Point
//{
//private:
//	int p_x;//点的横坐标
//	int p_y;//点的纵坐标
//
//public:
//	//设置点的横坐标
//	void setP_x(int x)
//	{
//		p_x = x;
//	}
//	//获取点的横坐标
//	int getP_x()
//	{
//		return p_x;
//	}
//	//设置点的纵坐标
//	void setP_y(int y)
//	{
//		p_y = y;
//	}
//	//获取点的纵坐标
//	int getP_y()
//	{
//		return p_y;
//	}
//};
//
//string Judgment(Circle &circle,Point &point)
//{
//	int c_x = circle.getC_x();
//	int c_y = circle.getC_y();
//	int radius = circle.getRadius();
//	int p_x = point.getP_x();
//	int p_y = point.getP_y();
//	double n = (c_x - p_x)*(c_x - p_x) + (c_y - p_y)*(c_y - p_y);
//	if (n == radius * radius)
//	{
//		return "点在圆上";
//	}
//	else if(n > radius * radius)
//	{
//		return "点在圆外";
//	}
//	else if (n < radius * radius)
//	{
//		return "点在圆内";
//	}
//}
//
//int main()
//{
//	Circle circle;
//	circle.setC_x(10);
//	circle.setC_y(20);
//
//	circle.setRadius(10);
//
//	Point point;
//	point.setP_x(10);
//	point.setP_y(15);
//
//	cout<<Judgment(circle,point)<<endl;
//
//	system("pause");
//	return 0;
//}