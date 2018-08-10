//#include<bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Test
{
public:
	Test()	//无参构造函数
	{
		a = 10;
		p = (char*)malloc(100);
		strcpy(p, "aaaaaaff");
		cout << "我是构造函数，被执行了" << endl;
	}
	void print()
	{
		cout << p << endl;
		cout << a << endl;
	}
	~Test()	//析构函数
	{
		if (p != NULL)
		{
			free(p);
		}
		cout << "我是析构函数,被调用了" << endl;
	}
private:
	int a;
	char *p;
};
//给对象搭建一个舞台，研究对象的行为
void obplay()
{
	Test t1;
	t1.print();
	cout << "分隔符" << endl;
	Test t2;
	t2.print();
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	//Test t1, t2;
	obplay();
	cout<<"hello..."<<endl;
	system("pause");
	
}