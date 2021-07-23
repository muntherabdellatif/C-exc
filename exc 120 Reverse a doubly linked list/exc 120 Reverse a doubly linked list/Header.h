#pragma once
#include <iostream>
template <class T>
class DoublyList {
	struct ListNode
	{
		T entry;
		ListNode* next;
		ListNode* previous;
	};
	int size;
	ListNode* top;
	ListNode* rear;
public:
	DoublyList();
	void InsertList(T element, int pos);
	bool PupList(T* element, int pos);
	bool clearList();
	void passList(void(*pf)(T));
	void passListOpposite(void(*pf)(T));
	void ListSize();
	bool isEmpty();
	void ReverseList();
};
template <class T> DoublyList<T>::DoublyList() {
	size = 0; top = NULL; rear = NULL;
}
template <class T> void DoublyList<T>::InsertList(T element, int pos) {
	ListNode* np = new ListNode;
	np->entry = element;
	if (!size && !pos) { // first element
		top = rear = np;
		np->next = NULL;
		np->previous = NULL;
	}
	else if (pos < size && pos > 0) { // element in med
		ListNode* p1 = top;
		ListNode* p2 = top->next;
		for (int i = 0; i < (pos - 1); i++) {
			p1 = p1->next; p2 = p2->next;
		}
		p1->next = np;
		p2->previous = np;
		np->next = p2;
		np->previous = p1;
	}
	else if (pos == 0) { // element on top
		np->next = top;
		top->previous = np;
		np->previous = NULL;
		top = np;
	}
	else if (pos == (size)) {// element on rear
		np->previous = rear;
		rear->next = np;
		np->next = NULL;
		rear = np;
	}
	size++;
}
template <class T> bool DoublyList<T>::PupList(T* element, int pos) {
	if (size) {
		ListNode* p1 = top;
		if (size == 1 && pos == 0) { // 1 element in list
			top = NULL;
			*element = rear->entry;
			free(top);
			rear = NULL;
		}
		else if (pos < (size - 1) && pos> 0) { // element in med
			ListNode* p2 = p1->next;
			ListNode* p3 = p2->next;
			for (int i = 0; i < (pos - 1); i++) {
				p1 = p1->next;
				p2 = p2->next;
				p3 = p3->next;
			}
			p1->next = p3;
			p3->previous = p1;
			*element = p2->entry;
			free(p2);
		}
		else if (pos == (size - 1)) { // element in rear 
			*element = rear->entry;
			p1 = rear->previous;
			p1->next = NULL;
			free(rear);
			rear = p1;
		}
		else if (pos == 0) { // element in top
			*element = top->entry;
			p1 = top->next;
			p1->previous = NULL;
			free(top);
			top = p1;
		}
		size--;
		return 1;
	}
	return 0;
}
template <class T> bool DoublyList<T>::clearList() {
	if (size) {
		ListNode* p1;
		for (; size; size--) {
			p1 = top;
			top = top->next;
			free(p1);
		}
		top = NULL; rear = NULL;
		return 1;
	}
	return 0;
}
template <class T> void DoublyList<T>::passList(void(*pf)(T)) {
	ListNode* p1;
	p1 = top;
	while (p1) {
		(*pf)(p1->entry);
		p1 = p1->next;
	}
}
template <class T> void DoublyList<T>::passListOpposite(void(*pf)(T)) {
	ListNode* p1;
	p1 = rear;
	while (p1) {
		(*pf)(p1->entry);
		p1 = p1->previous;
	}
}
template <class T> void DoublyList<T>::ListSize() {
	return size;
}
template <class T> bool DoublyList<T>::isEmpty() {
	return !size;
}
template <class T> void DoublyList<T>::ReverseList() {
	ListNode* p1 = top;
	ListNode* p2 = top->next;
	while (p1 != rear) {
		p1->next = p1->previous;
		p1->previous = p2;
		p1 = p2;
		if (p2->next) { p2 = p2->next; }
	}
	p1->next = p1->previous;
	p1->previous = NULL;
	rear = top;
	top = p1;
}