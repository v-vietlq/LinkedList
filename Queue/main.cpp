#include "Queue.h"
int main()
{
	Queue Q;
	Q.enQueue(3);
	Q.enQueue(2);
	Q.enQueue(1);
	//cout << Q.deQueue() << endl;
	Q.deQueue();
	Q.PrintQueue();
	system("pause");
	return 0;
}