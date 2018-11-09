#include "Stack.h"
int main()
{
	Stack s;
	s.push(3);
	s.push(2);
	s.push(6);
	s.push(1);
	cout<< s.pop()<<endl;
	s.PrintStack();
	
	//cout << "\n";

	//s.PrintStack();
	system("pause");
	return 0;
}