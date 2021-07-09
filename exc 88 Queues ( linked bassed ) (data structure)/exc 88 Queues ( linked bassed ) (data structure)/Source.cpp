#include "Queue.h"
int main() {
	string line = "\n------------------------------------\n";
	Queues q; IntioalizeQueues(&q);
	QueuesEntry e = 5;

	while (1) {
		cout << line << "enter number to push it to Queue and -1 to pup and -2 to clear : ";
		cin >> e;
		if (e > 0) {
			if (!FullQueues(&q)) { QueuesPush(e, &q); }
			else { cout << " the Queue is full ." << endl; }
		}
		else if (e == -2) {
			ClearQueue(&q);
			cout << " the Queue is cleared ." << endl;
		}
		else if (e == -1) {
			if (!EmptyQueues(&q)) {
				QueuesPup(&e, &q);
				cout << " you pup number " << e << " from queue ." << endl;
			}
			else { cout << "the queue is empty " << endl; }
		}
		TraverseQueue(&q, print);
		cout << endl << "Queue Size is :" << QueuesSize(&q);
	}

}