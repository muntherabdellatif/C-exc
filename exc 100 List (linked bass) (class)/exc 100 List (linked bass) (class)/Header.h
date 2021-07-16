#pragma once
#include<iostream>
template<class T>
class List {
	struct ListNode {
		T entry;
		ListNode* next;
	};
	int size;
	ListNode* top;
public:
	List();
	void PushList(T element, int location);
	bool PupList(T *element, int location);
	bool GetList(T* element, int location);
	bool ReplaceList(T* element, int location);
	void ClearList();
	void ListSize();
	bool isEmpty();
	void PassList(void(*pf)(T));
};
template<class T> List<T>::List() {
	size = 0;
	top = NULL;
}
template<class T> void List<T>::PushList(T element, int location) {
	ListNode* np = new ListNode;
	np->next = NULL;
	np->entry = element;
	if (!top && location==0) {
		top = np;
	}
	else {
		if (location == 0) {
			np->next = top;
			top = np;
		}
		else {
			ListNode* qp = top;
			for (int i = 0; i < (location - 1); i++, qp = qp->next);
			np->next = qp->next;
			qp->next = np;
		}
	}
	size++;
}
template<class T> bool List<T>::PupList(T *element, int location) {
	if (size) {
		ListNode* p1 = top;
		ListNode* p2 = top;
		if (location == 0) {
			top = top->next;
			*element = p1->entry;
			free(p1);
		}
		else {
			for (int i = 0; i < (location - 1); i++, p1 = p1->next);
			p2 = p1->next;
			p1->next = p2->next;
			*element = p2->entry;
			free(p2);
		}
		size--;
		return 1;
	}
	return 0;
}
template<class T> void List<T>::ClearList() {
	ListNode* p1 = top;
	while (top) {
		top = top->next;
		free(p1);
		p1 = top;
	}
}
template<class T> bool List<T>::GetList(T* element, int location) {
	if (size) {
		ListNode* p1 = top;
		ListNode* p2 = top;
		if (location == 0) {
			*element = p1->entry;
		}
		else {
			for (int i = 0; i < (location - 1); i++, p1 = p1->next);
			p2 = p1->next;
			*element = p2->entry;
		}
		return 1;
	}
	return 0;
}
template<class T> bool List<T>::ReplaceList(T* element, int location) {
	if (size) {
		ListNode* p1 = top;
		ListNode* p2 = top;
		if (location == 0) {
		    p1->entry=* element;
		}
		else {
			for (int i = 0; i < (location - 1); i++, p1 = p1->next);
			p2 = p1->next;
			p2->entry=* element;
		}
		return 1;
	}
	return 0;
}
template<class T>void List<T>::ListSize() {
	return (size);
}
template<class T>bool List<T>::isEmpty() {
	return (!size);
}
template<class T>void List<T>::PassList(void(*pf)(T)) {
	ListNode* p1 = top;
	while (p1) {
		(*pf)(p1->entry);
		p1 = p1->next;
	}
}