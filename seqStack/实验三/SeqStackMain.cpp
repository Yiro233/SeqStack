//*************************
//*** SeqStackMain.cpp  ***
//*************************
#include "SeqStack.h"
#include "SeqStack.cpp"
#include <iostream>
using namespace std;
void main()
{
	SeqStack<int> SS;
	int n = 0,x = 0,temp = 0;
	cout << "������Ҫ��ջ���ݵĸ�����\n";
	cin >> n;
	while (n > StackSize||n == 0)
	{
		cout << "*����������*" << endl;
		cin >> n;
	}
	cout << "�밴˳���������ݣ�\n";
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		SS.Push(x);
	}
	cout << "������ջ��ɣ�" << endl;
	cout << "��ǰջ��Ԫ��Ϊ��" << SS.GetTop() << endl;
	temp = SS.Pop();
	cout << "ִ�г�ջ����.....��ջԪ��Ϊ��" << temp << endl;
	cout << temp << "��ջ��";
	if (SS.Empty()) cout << "����ջ�ѿա�" << endl;
	else cout << "�µ�ջ��Ԫ��Ϊ��" << SS.GetTop() << endl;
}