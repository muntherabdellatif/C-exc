#pragma once
#include<iostream>
template<class T>
class Queue {
	struct QueueNode
	{
		QueueNode* next;
		T entry;
	};
	QueueNode* first;
	QueueNode* last;
	int size;
public:
	Queue();
	void QueuePush(T element);
	bool QueuePup(T* element);
	bool QueueTup(T* element);
	void PassQueue(void(*pf)(T));
	void clearQueue();
	bool EmptyQueues();
	int QueueSize();
};
template<class T>Queue<T>::Queue() {
	size = 0;
	first = NULL;
	last = NULL;
}
template<class T> void Queue<T>::QueuePush(T element) {
	QueueNode* np = new QueueNode;
	np->next = NULL;
	if (last) { last->next = np; }
	last = np;
	np->entry = element;
	if (size == 0) {
		first = last;
	}
	size++;
}
template<class T> bool Queue<T>::QueuePup(T* element) {
	if (size != 0) {
		QueueNode* np;
		*element = first->entry;
		np = first;
		first = first->next;
		delete (np);
		size--;
		return 0;
	}
	return 1;
}
template<class T> bool Queue<T>::QueueTup(T* element) {
	if (size != 0) {
		*element = first->entry;
		return 0;
	}
	return 1;
}
template<class T> void Queue<T>::PassQueue(void(*pf)(T)) {
	QueueNode* np;
	np = first;
	while (np) {
		(*pf)(np->entry);
		np = np->next;
	}
}
template<class T> void Queue<T>::clearQueue() {
	QueueNode* np;
	np = first;
	while (np) {
		np = first->next;
		free(first);
		first = np;
		size--;
	}
}
template<class T> bool Queue<T>::EmptyQueues() {
	return (!size);
}
template<class T> int Queue<T>::QueueSize() {
	return (size);
}