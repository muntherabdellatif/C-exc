#include "Queue.h"

void IntioalizeQueues(queues* pq) {
	pq->front = NULL;
	pq->rear = NULL;
	pq->size = 0;
}
void QueuesPush(QueuesEntry e, queues* pq) {
	QueuesNode* pn = (QueuesNode*)malloc(sizeof(QueuesNode));
	pn->next = NULL;
	pn->entry = e;
	if (!pq->rear) { pq->front = pn; }
	else { pq->rear->next = pn; }
	pq->rear = pn;
	pq->size++;
}
void QueuesPup(QueuesEntry* pe, queues* pq) {
	QueuesNode* pn = pq->front;
	*pe = pn->entry;
	pq->front = pn->next;
	free(pn);
	if (!pq->front) {
		pq->rear = NULL;
	}
	pq->size--;
}
int QueuesSize(queues* pq) {
	return pq->size;
}
bool EmptyQueues(queues* pq) {
	return !pq->size;
}
bool FullQueues(queues* pq) {
	return 0;
}
void TraverseQueue(queues* pq, void(*pf)(QueuesEntry e)) {
	for (queuesNode* pn = pq->front; pn; pn = pn->next) {
		(*pf)(pn->entry);
	}
}
void ClearQueue(queues* pq) {
	while (pq->front) {
		pq->rear = pq->front->next;
		free(pq->front);
		pq->front = pq->rear;
	}
	pq->size = 0;
}

void print(QueuesEntry e) {
	cout << e << "\t";
}
