#pragma once
#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node();
	~Node();
};

class Queue
{
private:
	Node * Head;
	Node * Tail;
	int Max_Length;
public:
	void enQueue(int data);
	int deQueue();
	bool isEmpty();
	bool isFull();
	int Sizeof();
	void PrintQueue();
	Queue();
	~Queue();
};

