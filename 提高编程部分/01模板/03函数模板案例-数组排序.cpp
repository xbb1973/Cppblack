//#include<iostream>
//using namespace std;
//
////ʵ��ͨ�õ� �������������ĺ���
////���� ��С����
////�㷨 ѡ��
////���� char����     int����
//
////����
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////�ṩ��ӡ�����ģ��
//template <class T>
//void printArray(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i];
//	}
//}
//
////�����㷨
//template<class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			//����
//			mySwap(arr[max],arr[i]);
//		}
//	}
//}
//void test01()
//{
//	//����char����
//	char charArr[] = "badcef";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//
//}
//
//void test02()
//{
//	//����int����
//	int intArr[] = { 1,3,2,6,4,0 };
//	int num = sizeof(intArr) / sizeof(intArr[0]);
//	mySort(intArr, num);
//	printArray(intArr, num);
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}