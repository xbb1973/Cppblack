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
//	//���ó�
//	void setL(int c_long)
//	{
//		c_L = c_long;
//	}
//	//��ȡ��
//	int getL()
//	{
//		return c_L;
//	}
//
//	//���ÿ�
//	void setW(int c_long)
//	{
//		c_W = c_long;
//	}
//	//��ȡ��
//	int getW()
//	{
//		return c_W;
//	}
//
//	//���ø�
//	void setH(int c_long)
//	{
//		c_H = c_long;
//	}
//	//��ȡ��
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
////����ȫ�ֺ����ж������������Ƿ����
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
//	cout << "������������Ϊ��" << cube.area() << "�����Ϊ��" << cube.volume() << endl;
//
//	Cube cube2;
//	cube2.setH(20);
//	cube2.setL(50);
//	cube2.setW(11);
//
//	bool j = IsSame(cube, cube2);//����ȫ�ֺ����ж�
//
//	if (j)
//	{
//		cout << "�������������" << endl;
//	}
//	else
//	{
//		cout << "���������岻��" << endl;
//	}
//
//	//���ó�Ա�����ж�
//	bool ret = cube.isSameByClass(cube2);
//	if (ret)
//	{
//		cout << "������������ȣ���Ա�����жϣ�" << endl;
//	}
//	else
//	{
//		cout << "���������岻�ȣ���Ա�����жϣ�" << endl;
//	}
//
//	system("pause");
//	return 0;
//}