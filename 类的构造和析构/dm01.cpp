//#include<bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Test
{
public:
	Test()	//�޲ι��캯��
	{
		a = 10;
		p = (char*)malloc(100);
		strcpy(p, "aaaaaaff");
		cout << "���ǹ��캯������ִ����" << endl;
	}
	void print()
	{
		cout << p << endl;
		cout << a << endl;
	}
	~Test()	//��������
	{
		if (p != NULL)
		{
			free(p);
		}
		cout << "������������,��������" << endl;
	}
private:
	int a;
	char *p;
};
//������һ����̨���о��������Ϊ
void obplay()
{
	Test t1;
	t1.print();
	cout << "�ָ���" << endl;
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