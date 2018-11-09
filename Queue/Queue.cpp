#include "Queue.h"

Node::Node()
{
}
Node::~Node()
{
}
Queue::Queue()
{
	Head = NULL;
	Tail = NULL;
	Max_Length = 20;
}


Queue::~Queue()
{
}
bool Queue::isEmpty()
{
	if (Head == NULL && Tail == NULL)
		return true;
	return false;
}
void Queue::enQueue(int data)
{
	if (isFull())
		cout << "Queue is Full";
	else
	{
		Node* newNode = new Node;
		newNode->data = data;
		newNode->next = NULL;
		if (Head == NULL)
		{
			Head = newNode;
			Tail = newNode;
		}
		else
		{
			Tail->next = newNode;
			Tail = newNode;
		}
	}
}
int Queue::deQueue()
{
	if (isEmpty())
	{
		cout << "Queue is empty";
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
int Queue::Sizeof()
{
	int Count = 0;
	Node* p = Head;
	while (p!=NULL)
	{
		Count++;
		p = p->next;
	}
	return Count;
}
bool Queue::isFull()
{
	if (Sizeof() == Max_Length) return true;
	return false;
}
void Queue::PrintQueue()
{
	if (Head == NULL) return;
	Node* p = Head;
	while (p!=NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
}