//#include<iostream>
//using namespace std;
//
//class Circle
//{
//private:
//	int radius;//����뾶
//	int c_x;//Բ��x����
//	int c_y;//Բ��y����
//public:
//	//���ð뾶
//	void setRadius(int r)
//	{
//		radius = r;
//	}
//	//��ȡ�뾶
//	int getRadius()
//	{
//		return radius;
//	}
//
//	//����Բ��x����
//	void setC_x(int x)
//	{
//		c_x = x;
//	}
//	//��ȡԲ��x����
//	int getC_x()
//	{
//		return c_x;
//	}
//
//	//����Բ��y����
//	void setC_y(int y)
//	{
//		c_y = y;
//	}
//	//��ȡԲ��y����
//	int getC_y()
//	{
//		return c_y;
//	}
//};
//class Point
//{
//private:
//	int p_x;//��ĺ�����
//	int p_y;//���������
//
//public:
//	//���õ�ĺ�����
//	void setP_x(int x)
//	{
//		p_x = x;
//	}
//	//��ȡ��ĺ�����
//	int getP_x()
//	{
//		return p_x;
//	}
//	//���õ��������
//	void setP_y(int y)
//	{
//		p_y = y;
//	}
//	//��ȡ���������
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
//		return "����Բ��";
//	}
//	else if(n > radius * radius)
//	{
//		return "����Բ��";
//	}
//	else if (n < radius * radius)
//	{
//		return "����Բ��";
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