#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
	
	//---------------  Test Case 1  -------------------------
	Stack st;
	
	st.push(5);
	st.push(4);
	st.push(3);
	st.pop();
	
	cout << "There is " << st.peek() << " at the top of the stack" << endl;
	
	st.push(2);
	st.push(1);
	st.push(0);
	st.pop();
	
	cout << "There are " << st.size() << " elements in the stack." << endl;
	st.print();
	
	//---------------  Test Case 2  -------------------------
	Stack st2;
	
	for(int i=0; i<11;i++)
		st2.push(i);
	
	if(st2.isFull())
		cout << "Stack is full now" << endl;
	else
		cout << "Stack is Not full yet" << endl;
	
	for(int i=0; i<11;i++)
		st2.pop();
	
	if(st2.isEmpty())
		cout << "Stack is empty now" << endl;
	else
		cout << "Stack is Not empty yet" << endl;
	
	return 0;
}
