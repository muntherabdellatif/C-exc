#pragma once
#include <iostream>
#define QueuesEntry int 
using namespace std;
typedef struct queuesNode {
	QueuesEntry entry;
	struct queuesNode* next;
}QueuesNode;
typedef struct queues {
	queuesNode* front;
	queuesNode* rear;
	int size;
}Queues;

void IntioalizeQueues(queues* pq);
void QueuesPush(QueuesEntry e, queues* pq);
void QueuesPup(QueuesEntry* pe, queues* pq);
int QueuesSize(queues* pq);
bool EmptyQueues(queues* pq);
bool FullQueues(queues* pq);
void TraverseQueue(queues* pq, void(*pf)(QueuesEntry e));
void ClearQueue(queues* pq);
void print(QueuesEntry e);