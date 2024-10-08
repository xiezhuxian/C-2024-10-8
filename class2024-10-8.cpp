//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//class Stack {
//public:
//	void Init(int n = 4)
//	{
//		array = (int*)malloc(sizeof(int) * n);
//		if (array == nullptr)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		capacity = n;
//		top = 0;
//	}
//	void Push(int x)
//	{
//		// ...扩容
//		array[top++] = x;
//	}
//	int Top()
//	{
//		assert(top > 0);
//		return array[top - 1];
//	}
//	void Destroy()
//	{
//		free(array);
//		array = nullptr;
//		top = capacity = 0;
//	}
//private:
//	//成员变量
//	int* array;
//	size_t capacity;
//	size_t top;
//};

//int a[10];
//void aa(int n)
//{
//	a[0] = n;
//	cout << a[0] << endl;
//}

//struct Person {
//public:
//	void Init(const char* name, int age, int tel)
//	{
//		strcpy(_name, name);
//		_age = age;
//		_tel = tel;
//	}
//	void Print()
//	{
//		cout << "姓名：" << _name << endl;
//		cout << "年龄：" << _age << endl;
//		cout << "电话：" << _tel << endl;
//	}
//private:
//	char _name[10];
//	int _age;
//	int _tel;
//};
//struct aa {
//	aa* a;
//};

//typedef struct QueueNode {
//	struct QueueNode* next;
//	int val;
//}QNode;
//
//typedef struct Queue {
//	QNode* head;
//	QNode* tail;
//	int size;
//}QU;
//void QueueInit(QU& q)
//{
//	q.head = nullptr;
//	q.tail = nullptr;
//	q.size = 0;
//}
//
//int main()
//{
//	Stack st;
//	st.Init();
//	st.Push(1);
//	st.Push(2);
//	st.Push(3);
//	st.Push(4);
//	cout << st.Top() << endl;
//
//	st.Destroy();
//
//	Person p1;
//	p1.Init("张三", 18, 1831622);
//	p1.Print();
//
//	QU q;
//	QueueInit(q);
//	return 0;
//}
//#include "Stack.h"
//
//int main()
//{
//	Stack st;
//	st.Init();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	// 这⾥只是声明，没有开空间
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	// Date类实例化出对象d1和d2
//	Date d1;
//	Date d2;
//	d1.Init(2021, 1, 29);
//	d1.Print();
//	d2.Init(2024, 10, 8);
//	d2.Print();
//	cout << sizeof(d1) << endl;
//	cout << sizeof(d2) << endl;
//	
//	return 0;
//}

#include<iostream>
using namespace std;
// 计算⼀下A/B/C实例化的对象是多⼤？
class A
{
public:
	void Print()
	{
		cout << _ch << endl;
	}
private:
	char _ch;
	int _i;
};
class B
{
public:
	void Print()
	{
		//...
	}
};
class C
{};
int main()
{
	A a;
	B b;
	C c;
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	return 0;
}
