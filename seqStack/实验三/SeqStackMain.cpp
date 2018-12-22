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
	cout << "请输入要入栈数据的个数：\n";
	cin >> n;
	while (n > StackSize||n == 0)
	{
		cout << "*请重新输入*" << endl;
		cin >> n;
	}
	cout << "请按顺序输入数据：\n";
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		SS.Push(x);
	}
	cout << "数据入栈完成！" << endl;
	cout << "当前栈顶元素为：" << SS.GetTop() << endl;
	temp = SS.Pop();
	cout << "执行出栈操作.....出栈元素为：" << temp << endl;
	cout << temp << "出栈后";
	if (SS.Empty()) cout << "，此栈已空。" << endl;
	else cout << "新的栈顶元素为：" << SS.GetTop() << endl;
}