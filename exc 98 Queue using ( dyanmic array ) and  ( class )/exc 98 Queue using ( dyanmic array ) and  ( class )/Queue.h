#pragma once
#include<iostream>
template<class T>
class Queue {
	T* Entry;
	int first, last , maxSize ,size;
public:
	Queue(int MAX);
	bool PushQueue(T element);
	bool PupQueue(T *element);
	bool TupQueue(T* element);
	void ClearQueue();
	int SizeQueue();
	bool isEmpty();
	bool isFull();
	void passQueue(void(*pf)(T));
};
template<class T> Queue<T>::Queue(int MAX) {
	Entry = new int[MAX];
	maxSize = MAX;
	first = 0; last = 0; size = 0;
}
template<class T> bool Queue<T>::PushQueue(T element) {
	if (size != maxSize) {
		Entry[last] = element;
		last = (last + 1) % maxSize;
		size++;
		return 1;
	}
	return 0;
}
template<class T> bool Queue<T>::PupQueue(T *element) {
	if (size > 0) {
		*element = Entry[first];
		first = (first + 1) % maxSize;
		size--;
		return 1;
	}
	return 0;
}
template<class T> bool Queue<T>::TupQueue(T* element) {
	if (size > 0) {
		*element = Entry[first];
		return 1;
	}
	return 0;
}
template<class T> void Queue<T>::ClearQueue() {
	size = last = first = 0;
}
template<class T> int Queue<T>::SizeQueue() {
	return size;
}
template<class T> bool Queue<T>::isEmpty() {
	return (!size);
}
template<class T> bool Queue<T>::isFull() {
	return (size == maxSize);
}
template<class T> void Queue<T>::passQueue(void(*pf)(T)) {
	for (int i = 0; i < size; i++) {
		(*pf)(Entry[(first + i) % maxSize]);
	}
}