#include"Queue.h"
void IntioalizeQueues(queues* pq) {
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
		(*pf)(pq->entry[(pq->bass + i) % MaxEntry]);
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