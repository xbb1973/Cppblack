//#include<iostream>
//#include<deque>
//#include<vector>
//#include <stdio.h>
//#include <algorithm>
//#include <time.h>
//using namespace std;
//
////ѡ����
//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//	string m_Name;//����
//	int m_Score;//ƽ����
//};
//
////
//void createPerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += nameSeed[i];
//
//		int score = 0;
//
//		Person p(name, score);//name��score��
//
//		//��������person����ŵ�������
//		v.push_back(p);//�󶨺����������
//	}
//}
//
////���
//void setScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����ί�ķ��� ���뵽deque������
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;//60~100
//			d.push_back(score);
//		}
//
//		//����
//		sort(d.begin(), d.end());
//
//		//ȥ����ߺ���ͷ�
//		d.pop_back();
//		d.pop_front();
//
//		//ȡƽ����
//		int sum = 0;
//		for (int i = 0; i < d.size(); i++)
//		{
//			sum += d[i];//�ۼ�ÿ����ί�ķ���
//		}
//		int avg = sum / d.size();
//
//		//��ƽ���� ��ֵ��ѡ������
//		it->m_Score = avg;
//	}
//}
//
////
//void showScore(vector<Person>& v)
//{
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << "������" << v[i].m_Name << " ƽ���֣�" << v[i].m_Score << endl;
//	}
//}
//
//int main()
//{
//	//���������
//	srand((unsigned int)time(NULL));
//	//��rand()���ʹ�� ��ֹÿ�����ɵ��������ͬ
//
//	//1.����5��ѡ��
//	vector<Person>v;//���ѡ�ֵ�����
//	createPerson(v);
//	//2.��5��ѡ�ִ��
//	setScore(v);
//	//3.��ʾ���÷�
//	showScore(v);
//	system("pause");
//	return 0;
//}