#include <iostream>
#define QueuesEntry int 
using namespace std;

typedef struct queues {

}Queues;

void IntioalizeQueues(queues* pq) {

}
bool QueuesPush(QueuesEntry e, queues* pq) {

}
bool QueuesPup(QueuesEntry* e, queues* pq) {

}
int QueuesSize(queues* pq) {

}
bool EmptyQueues(queues* pq) {

}
bool FullQueues(queues* pq) {

}
void TraverseQueue(queues* pq, void(*pf)(QueuesEntry e)) {

}
void ClearQueue(queues* pq) {

}

void print(QueuesEntry e) {
	cout << e << "\t";
}

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