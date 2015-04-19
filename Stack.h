#ifndef STACK_H
#define STACK_H
#include <iostream>

using namespace std;

class Stack
{
public:
	Stack();
	~Stack();
	void push(int);
	void pop(int);
	void peek();
	void isFull(int);
	void isEmpty();
	

private:
	typedef struct
	{
	int *data;
	int *previous;
	int *next;
   }node;
	node *current;
	node *temp;
	node *tail;
};
#endif
