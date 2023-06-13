//#include<iostream>
//using namespace std;
//
//class Building;
//class goodGay
//{
//public:
//	//goodGay();
//	void visit();//只让visit函数作为Building的好朋友，可以访问Building中的private
//	//void visit2();
//
//private:
//	Building* building;
//};
//
//class Building
//{
//
//	friend void goodGay::visit();
//public:
//	Building();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
//Building::Building()
//{
//	this->m_BedRoom = "卧室";
//	this->m_SittingRoom = "客厅";
//}
//
////goodGay::goodGay()
////{
////	building = new Building;
////}
//
//void goodGay::visit()
//{
//	goodGay::building = new Building;
//	cout << "朋友访问了" << building->m_BedRoom << endl;
//	cout << "朋友访问了" << building->m_SittingRoom << endl;
//}
//
//
//int main()
//{
//	goodGay  g;
//	g.visit();
//
//	system("pause");
//	return 0;
//}