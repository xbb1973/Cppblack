//#include<iostream>
//#include<string>
//using namespace std;
//#include"MyArray.hpp"
//
//void printIntArray(MyArray<int>&arr)
//{
//	for (int i = 0; i < arr.getSize();i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//void test01()
//{
//	MyArray<int>arr1(5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		//����β�巨�������в�������
//		arr1.Push_Back(i);
//	}
//
//	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
//	printIntArray(arr1);
//	
//	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
//	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;
//
//	MyArray<int>arr2(arr1);
//
//	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
//	printIntArray(arr2);
//
//	//βɾ
//	arr2.Pop_Back();
//	cout << "arr2βɾ��" << endl;
//	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
//	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;
//
//	//MyArray<int>arr3(100);
//	//arr3 = arr1;
//}
//
////�����Զ������������
//class Person
//{
//public:
//	Person() {};
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//public:
//	string m_Name;
//	int m_Age;
//};
//
//void printPersonArry(MyArray<Person>& personArr)
//{
//	for (int i = 0; i < personArr.getSize(); i++)
//	{
//		cout << "������" << personArr[i].m_Name << " ���䣺" << personArr[i].m_Age << endl;
//	}
//}
//
//void test02()
//{
//	MyArray<Person> pArray(10);
//	Person p1("�����", 30);
//	Person p2("����", 20);
//	Person p3("槼�", 18);
//	Person p4("���Ѿ�", 15);
//	Person p5("����", 24);
//
//	//��������
//	pArray.Push_Back(p1);
//	pArray.Push_Back(p2);
//	pArray.Push_Back(p3);
//	pArray.Push_Back(p4);
//	pArray.Push_Back(p5);
//
//	printPersonArry(pArray);
//
//	cout << "pArray�Ĵ�С��" << pArray.getSize() << endl;
//	cout << "pArray��������" << pArray.getCapacity() << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}