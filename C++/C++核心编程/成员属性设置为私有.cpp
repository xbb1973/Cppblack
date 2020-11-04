//#include<iostream>
//using namespace std;
//#include<string>//输出字符串需要在前面添加string的头文件
//
////成员属性设置为私有
////1.可以自己控制读写权限
////2.对于写可以检测数据的有效性
//
//class Person
//{
//public:
//	//设置姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//	
//	//设置年龄
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "请输入有效值" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//获取年龄  
//	int getAge()
//	{
//		m_Age = 0;
//		return m_Age;
//	}
//	//设置情人 只写
//	void setLover(string name)
//	{
//		m_Lover = name;
//	}
//
//private:
//	//姓名 可读可写
//	string m_Name;
//	//年龄 只读
//	int m_Age;
//	//情人 只写
//	string m_Lover;
//
//};
//
//int main()
//{
//	Person p;
//	p.setName("张三");
//	p.setAge(1000);
//	cout << "姓名为：" << p.getName() << endl;
//	cout << "年龄为：" << p.getAge() << endl;
//
//	system("pause");
//	return 0;
//}