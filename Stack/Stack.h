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
class Stack
{
private:
	Node * Head;
	int Max_depth;
public:
	void push(int a);
	int pop();
	bool isEmpty();
	bool isFull();
	int Sizeof();
	void PrintStack();
	Stack();
	~Stack();
};

