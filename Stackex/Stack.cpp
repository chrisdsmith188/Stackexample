#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack() {
	top = -1;
}

bool Stack::isEmpty() {
	return (top == -1);
}

bool Stack::isFull() {
	return (top == (MAX-1));
}

int Stack::size() {
	return (top+1);
}

void Stack::push(int number) {
	if (isFull()) {
		cout << "The stack is full.\n";
	}
	else {
		top++;
		stack[top] = number;
	}
}

int Stack::pop() {
	if (isEmpty()){
		cout << "The stack is empty.\n";
		return 0;
	}
	else {
		int number = stack[top];
		top--;
		return number;
	}
}

int Stack::peek() {
	if (isEmpty()) {
		cout << "The stack is empty.\n";
		return 0;
	}
	else {
		int number = stack[top];
		return number;
	}
}

void Stack::print() {
	for (int i = 0; i <= top; i++)
		cout << stack[i] << " ";
	cout << endl;
}
