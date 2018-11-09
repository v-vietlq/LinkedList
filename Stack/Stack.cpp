#include "Stack.h"


Node::Node()
{
}
Node::~Node()
{
}
Stack::Stack()
{
	Head = NULL;
	Max_depth = 20; // size of stack is 20 elements
}
Stack::~Stack()
{
}
bool Stack::isEmpty()
{
	if (Head == NULL) return true;
	else return false;
}
int Stack::Sizeof()
{
	int Count = 0;
	Node *p = Head;
	while (p!=NULL)
		{
			Count++;
			p = p->next;
		}
	return Count;
}
bool Stack::isFull()
{
	if (Sizeof() == Max_depth) return true;
	else return false;
}
void Stack::push(int data)
{
	if (isFull())
		cout << "Stack is Full";
	else
	{
		Node *newNode = new Node;
		newNode->data = data;
		newNode->next = Head;
		Head = newNode;
	}
}
int Stack::pop()
{
	if (isEmpty())
	{
		cout << "Stack is empty";
		return -1;
	}

	else
	{
		Node* p = Head;
		Head = Head->next;
		int pdata = p->data;
		delete p;
		return pdata;
	}
}
void Stack::PrintStack()
{
	if (isEmpty()) return;
	else
	{
		Node* p = Head;
		while (p!=NULL)
		{
			cout << p->data << " ";
			p = p->next;
		}
	}
}
