//#include<iostream>
//#include<deque>
//#include<vector>
//#include <stdio.h>
//#include <algorithm>
//#include <time.h>
//using namespace std;
//
////选手类
//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//	string m_Name;//姓名
//	int m_Score;//平均分
//};
//
////
//void createPerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += nameSeed[i];
//
//		int score = 0;
//
//		Person p(name, score);//name和score绑定
//
//		//将创建的person对象放到容器中
//		v.push_back(p);//绑定后放在容器里
//	}
//}
//
////打分
//void setScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//将评委的分数 放入到deque容器中
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;//60~100
//			d.push_back(score);
//		}
//
//		//排序
//		sort(d.begin(), d.end());
//
//		//去除最高和最低分
//		d.pop_back();
//		d.pop_front();
//
//		//取平均分
//		int sum = 0;
//		for (int i = 0; i < d.size(); i++)
//		{
//			sum += d[i];//累加每个评委的分数
//		}
//		int avg = sum / d.size();
//
//		//将平均分 赋值到选手身上
//		it->m_Score = avg;
//	}
//}
//
////
//void showScore(vector<Person>& v)
//{
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << "姓名：" << v[i].m_Name << " 平均分：" << v[i].m_Score << endl;
//	}
//}
//
//int main()
//{
//	//随机数种子
//	srand((unsigned int)time(NULL));
//	//和rand()配合使用 防止每次生成的随机数相同
//
//	//1.创建5名选手
//	vector<Person>v;//存放选手的容器
//	createPerson(v);
//	//2.给5名选手打分
//	setScore(v);
//	//3.显示最后得分
//	showScore(v);
//	system("pause");
//	return 0;
//}