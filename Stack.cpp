#include <iostream>
#include "Stack.h"
#include <iomanip>
#include "ctype.h"

using namespace std;

Stack::Stack()
{
	tail = NULL;
	current = tail;
}
Stack::~Stack()
{
}

void Stack::push(int r)
{
	current = tail;
	node *temp;
	if(current->previous != NULL)
	{
		temp == malloc(sizeof(node));
		r = current->data;
		
	}
		current->previous = current;
}
void Stack::pop(int d)
{
	current = temp;
	if(current!= NULL)
	{
		temp->data = current->data;
		
		free(temp);
	    *current = (*current)->next;
	}
}
void Stack::peek()
{
	while (current->next != NULL)
	{
		cout << current->data<<endl;

		current = current->next;
	}
}
void Stack::isFull(int counter)
{
	int n = 0;
	while(current->previous!=NULL && counter!=n)
	{
		current = current->previous;
		counter++;
	}
	if(counter>=n)
	{
	cout << "The Stack Is Full" << endl;
	}
	else{
		cout << "The Stack Is Not Empty" << endl;
	}
}

void Stack::isEmpty()
{
	if(current = NULL)
	{
		cout << "The Stack Is Empty" << endl;
	}
}









