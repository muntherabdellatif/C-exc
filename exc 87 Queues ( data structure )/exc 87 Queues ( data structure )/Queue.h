#pragma once
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
void IntioalizeQueues(queues* pq);
bool QueuesPush(QueuesEntry e, queues* pq);
bool QueuesPup(QueuesEntry* e, queues* pq);
int QueuesSize(queues* pq);
bool EmptyQueues(queues* pq);
bool FullQueues(queues* pq);
bool QueuesTup(QueuesEntry* e, queues* pq);
void TraverseQueue(queues* pq, void(*pf)(QueuesEntry e));
void ClearQueue(queues* pq);
void print(QueuesEntry e);