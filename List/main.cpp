#include "Node.h"
int main()
{
	LinkedList L;
	L.AddTail(22);
	L.AddHead(12);
	
	L.AddHead(212);
	L.AddTail(23);
	L.AddHead(231);
	L.AddTail(2131);
	L.AddTail(-12);
	L.AddTail(-19);
	L.AddHead(45);
	L.PrintList();
	cout << "\n";
	//L.RemoveAll ();
	cout << L.SumList() << endl;
	cout << L.CountList() << endl;
	cout << L.MaxList() << endl;

	system("pause");
	return 0;
}
