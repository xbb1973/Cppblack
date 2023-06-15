#include<iostream>
using namespace std;

const int* func()
{
	const int* a = (const int *)10;
	return a;
}


int func()
{
	int a = 10;
	return &a;
}

int main()
{
	// int a = 10;

    // const int *a = func();

	int a = func();

	cout << &a << endl;

	system("pause");
	return 0;
}