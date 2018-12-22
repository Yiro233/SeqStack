//********************
//**** SeqStack.h ****
//********************

#ifndef SeqStack_H
#define SeqStack_H
const int StackSize = 10;
template <class T>
class SeqStack
{
public:
	SeqStack();
	~SeqStack();
	void Push(T x);
	T Pop();
	T GetTop();
	int Empty();
private:
	T data[StackSize];
	int top;
};
#endif