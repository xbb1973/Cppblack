//#include<iostream>
//using namespace std;
//
//class Building;
//class goodGay
//{
//public:
//	//goodGay();
//	void visit();//ֻ��visit������ΪBuilding�ĺ����ѣ����Է���Building�е�private
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
//	this->m_BedRoom = "����";
//	this->m_SittingRoom = "����";
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
//	cout << "���ѷ�����" << building->m_BedRoom << endl;
//	cout << "���ѷ�����" << building->m_SittingRoom << endl;
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