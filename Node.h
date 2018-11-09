#pragma once
#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node();
	~Node();
};
class LinkedList
{
private:
	Node * Head, *Tail;
public:
	Node * CreateNode(int data);
	bool AddHead(int data);
	bool AddFirst(int data);
	bool AddTail(int data);
	void RemoveHead();
	void RemoveTail();
	void RemoveAll();
	void PrintList();
	int SumList();
	int CountList();
	int MaxList();
	LinkedList();
	~LinkedList();
};

