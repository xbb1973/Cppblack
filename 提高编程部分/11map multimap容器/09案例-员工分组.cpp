//#include<iostream>
//#include<map>
//#include<vector>
//#include<string>
//using namespace std;
//
///*
//- ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
//- Ա����Ϣ��: ���� ������ɣ����ŷ�Ϊ���߻����������з�
//- �����10��Ա�����䲿�ź͹���
//- ͨ��multimap������Ϣ�Ĳ��� key(���ű��) value(Ա��)
//- �ֲ�����ʾԱ����Ϣ
//*/
//
//#define CEHUA 0
//#define MEISHU 1
//#define YANFA 2
//
//class Worker
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
//
////����Ա��
//void creatWorker(vector<Worker>& v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.m_Name = "Ա��";
//		worker.m_Name += nameSeed[i];
//
//		worker.m_Salary = rand() % 10000 + 10000;//10000~19999
//		//��Ա���ŵ�������
//		v.push_back(worker);
//	}
//}
//
////Ա������
//void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����������ű��
//		int deptId = rand() % 3;//0 1 2
//
//		//��Ա�����뵽������
//		//key���ű�ţ�value����Ա��
//		m.insert(make_pair(deptId, *it));
//	}
//}
//
////
//void showWorkerByGroup(multimap<int, Worker>& m)
//{
//	//
//	cout << "�߻����ţ�" << endl;
//	multimap<int,Worker>::iterator pos=m.find(CEHUA);//�ҵ��߻�����ʼλ��
//	int count = m.count(CEHUA);//ͳ�ƾ�������
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary <<
//			endl;
//	} 
//	cout << "----------------------" << endl;
//	cout << "�з����ţ� " << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA); // ͳ�ƾ�������
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary <<
//			endl;
//	}
//
//
//}
//
//int main()
//{
//	//1.����Ա��
//	vector<Worker>vWorker;
//	creatWorker(vWorker);
//	
//	//2.Ա������
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//	//3.������ʾԱ��
//	showWorkerByGroup(mWorker);
//
//	system("pause");
//	return(0);
//}