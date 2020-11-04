//#include<iostream>
//using namespace std;
//
////实现通用的 对数组进行排序的函数
////规则 从小到大
////算法 选择
////测试 char数组     int数组
//
////交换
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////提供打印数组的模板
//template <class T>
//void printArray(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i];
//	}
//}
//
////排序算法
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
//			//交换
//			mySwap(arr[max],arr[i]);
//		}
//	}
//}
//void test01()
//{
//	//测试char数组
//	char charArr[] = "badcef";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//
//}
//
//void test02()
//{
//	//测试int数组
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