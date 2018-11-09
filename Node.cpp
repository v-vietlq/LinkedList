#include "Node.h"



Node::Node()
{
}


Node::~Node()
{
	
}

LinkedList::LinkedList()
{
	Head = Tail = NULL;
}
LinkedList::~LinkedList()
{
}
Node* LinkedList::CreateNode(int data)
{
	Node *newNode = new Node;
	if (newNode == NULL) return NULL;
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
bool LinkedList::AddFirst(int data)
{
	Node *newNode = CreateNode(data);
	if (newNode == NULL) return false;
		Node* p = Head;
		newNode->next = p;
		Head = Tail = newNode;
		Tail->next = NULL;
		return true;
}
bool LinkedList::AddHead(int data)
{
	if (Head == NULL && Tail == NULL)
		AddFirst(data);
	else
	{
		Node *newNode = CreateNode(data);
		if (newNode == NULL) return false;
		Node *p = Head;
		newNode->next = p;
		Head = newNode;
	}
	return true;
}
bool LinkedList::AddTail(int data)
{
	if (Head == NULL && Tail == NULL)
		AddFirst(data);
	else
	{
		Node* newNode = CreateNode(data);
		if (newNode == NULL) return false;
		Node *p = Tail;
		p->next = newNode;
		Tail = newNode;
	}
	return true;
}
void LinkedList::RemoveHead()
{
	if (Head == NULL) return;
	if (Head->next == NULL)
	{
		delete Head;
		Head = Tail = NULL;
	}
	else
	{
		Node* p = Head;
		Head = Head->next;
		delete p;
	}
}
void LinkedList::RemoveTail()
{
	if (Head == NULL) return;
	if (Head->next == NULL)
	{
		delete Head;
		Head = Tail = NULL;
	}
	else
	{
		Node*q=new Node , *p = Head;
		while (p != Tail)
		{
			q = p;
			p = p->next;
		}
		delete p;
		Tail = q;
		Tail->next = NULL;
	}
}
void LinkedList::RemoveAll()
{
	if (Head == NULL) return;
	while (Head!=NULL)
	{
		Node* p = Head;
		Head = Head->next;
		delete p;
	}
	Head = Tail = NULL;
}
void LinkedList::PrintList()
{
	if (Head == NULL)
		cout << "List is empty" << endl;
	Node*p = Head;
	while (p!=NULL)
	{
		cout << p->data<<" ";
		p = p->next;
	}
}
int LinkedList::SumList()
{
	if (Head == NULL)
	{
		cout << "List is empty";
		return -1; // if List is empty return -1
	}
	Node*p = Head; // Browse from the top of the list
	int Sum = 0; // Initialize Sum=0
	while (p != NULL)
	{
		Sum += p->data;
		p = p->next;
	}
	return Sum;
}
int LinkedList::CountList()
{
	if (Head == NULL)
	{
		cout << "List is empty";
		return -1; // if List is empty return -1
	}
	Node*p = Head;
	int Count = 0; // Initialize Count =0
	while (p!=NULL)
	{
		Count++;
		p = p->next;
	}
	return Count;
}
int LinkedList::MaxList()
{
	if (Head == NULL)
	{
		cout << "List is empty";
		return -1;
	}
	Node*p = Head;
	int Max = Head->data;
	while (p!=NULL)
	{
		if (p->data > Max) Max = p->data;
		p = p->next;
	}
	return Max;
}

