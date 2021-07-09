#include <iostream>
#define QueuesEntry int 
#define MaxEntry 8
using namespace std;

typedef struct queues {
	QueuesEntry entry[MaxEntry];
	int top;
	int bass;
	int size;
}Queues;

void IntioalizeQueues(queues* pq){
	pq->top = 0;
	pq->bass = 0;
	pq->size = 0;
}
bool QueuesPush(QueuesEntry e, queues* pq) {
	if (pq->size < MaxEntry) {
		pq->entry[pq->top] = e;
		if (pq->top >= (MaxEntry - 1)) { pq->top = 0; }
		else { pq->top++; }
		pq->size++;
		return 1;
	}
	return 0;
}
bool QueuesPup(QueuesEntry* e, queues* pq) {
	if (pq->size > 0) {
		*e = pq->entry[pq->bass];
		if (pq->bass >= (MaxEntry - 1)) { pq->bass = 0; }
		else { pq->bass++; }
		pq->size--;
		return 1;
  }
	return 0;
}
int QueuesSize(queues* pq) {
	return 	pq->size;
}
bool EmptyQueues(queues* pq) {
	return(!QueuesSize(pq));
}
bool FullQueues(queues* pq) {
	return (QueuesSize(pq) >= MaxEntry);
}
bool QueuesTup(QueuesEntry* e, queues* pq) {
	if (pq->size > 0) {
		*e = pq->entry[pq->bass];
		return 1;
	}
	return 0;
}
void TraverseQueue(queues* pq, void(*pf)(QueuesEntry e)) {
	int counter;
	for (int i = 0; i < (pq->size); i++) {
		(*pf)(pq->entry[ (pq->bass + i) % MaxEntry ]);
	}
}
void ClearQueue(queues* pq) {
	pq->top = 0;
	pq->bass = 0;
	pq->size = 0;
}

void print(QueuesEntry e) {
	cout << e << "\t";
}

int main() {
	string line = "\n------------------------------------\n";
	Queues q; IntioalizeQueues(&q);
	QueuesEntry e=5 ;

	while (1) {
		cout<< line <<"enter number to push it to Queue and -1 to pup and -2 to clear : ";
		cin >> e;
		if (e > 0) {
			if (!FullQueues(&q)) { QueuesPush(e, &q); }
			else { cout << " the Queue is full ." << endl; }
		}
		else if (e == -2) {
			ClearQueue(&q);
			cout << " the Queue is cleared ." << endl;
		}
		else if (e == -1){
			if (!EmptyQueues(&q)) {
				QueuesPup(&e, &q);
				cout << " you pup number " << e << " from queue ." << endl;
			}
			else { cout << "the queue is empty " << endl; }
		}
		TraverseQueue(&q, print);
		cout<<endl<< "Queue Size is :"<<QueuesSize(&q);
	}
}