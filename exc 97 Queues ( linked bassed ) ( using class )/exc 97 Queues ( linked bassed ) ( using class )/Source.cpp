#include "Queues.h"
using namespace std;
void print(int e) {
	cout << e << "\t";
}
int main() {
	string line = "\n------------------------------------\n";
	Queue<int> q; 
	int e = 5;

	while (1) {
		cout << line << "enter number to push it to Queue and -1 to pup and -2 to clear : ";
		cin >> e;
		if (e > 0) {
			q.QueuePush(e);
		}
		else if (e == -2) {
			q.clearQueue();
			cout << " the Queue is cleared ." << endl;
		}
		else if (e == -1) {
			if (!q.EmptyQueues()) {
				q.QueuePup(&e);
				cout << " you pup number " << e << " from queue ." << endl;
			}
			else { cout << "the queue is empty " << endl; }
		}
		q.PassQueue(print);
		cout << endl << "Queue Size is :" << q.QueueSize();
	}
}