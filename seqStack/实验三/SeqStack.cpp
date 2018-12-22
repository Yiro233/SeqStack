//********************
//*** SeqStack.cpp ***
//********************
#include "SeqStack.h"
#include <iostream>
using namespace std;
template <class T>
SeqStack<T>::SeqStack()
{
	top = -1;
}
template <class T>
SeqStack<T>::~SeqStack()
{
	cout << "正在销毁栈......已销毁！" << endl;
}
template <class T>
void SeqStack<T>::Push(T x)
{
	if (StackSize - 1 == top) throw "上溢！";
	data[++top] = x;
}
template <class T>
T SeqStack<T>::Pop()
{
	int x = 0;
	if (-1 == top) throw "下溢！";
	x = data[top--];
	return x;
}
template <class T>
T SeqStack<T>::GetTop()
{
	if (top != -1) return data[top];
}
template <class T>
int SeqStack<T>::Empty()
{
	if (-1 == top) return 1;
	return 0;
}