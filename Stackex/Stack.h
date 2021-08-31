#ifndef STACK_H
#define STACK_H

#define MAX 10

class Stack
{
public:
	Stack();
	bool isEmpty();
	bool isFull();
	int size();
	void push(int number);
	int pop();
	int peek();
	void print();

private:
	int stack[MAX];
	int top;
};

#endif
