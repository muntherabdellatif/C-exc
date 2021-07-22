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
	bool PupList(T* element, int location);
	bool GetList(T* element, int location);
	bool ReplaceList(T* element, int location);
	void ClearList();
	void ListSize();
	bool isEmpty();
	void PassList(void(*pf)(T));
	void cloneList(List* cl);
	void splitList(List* sl1, List* sl2);
	void deleteListMN(int m, int n);
};
template<class T> List<T>::List() {
	size = 0;
	top = NULL;
}
template<class T> void List<T>::PushList(T element, int location) {
	ListNode* np = new ListNode;
	np->next = NULL;
	np->entry = element;
	if (!top && location == 0) {
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
template<class T> bool List<T>::PupList(T* element, int location) {
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
			p1->entry = *element;
		}
		else {
			for (int i = 0; i < (location - 1); i++, p1 = p1->next);
			p2 = p1->next;
			p2->entry = *element;
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
template<class T>void List<T>::cloneList(List* cl) {
	ListNode* p1 = top;
	ListNode* p2 = cl->top;
	ListNode* np = new ListNode;
	np->entry = p1->entry;
	cl->top = np;
	p2 = np;
	np->next = NULL;
	while (p1->next) {
		p1 = p1->next;
		ListNode* np = new ListNode;
		np->entry = p1->entry;
		p2->next = np;
		np->next = NULL;
		p2 = p2->next;
	}
}
template<class T>void List<T>::splitList(List* sl1, List* sl2) {
	ListNode* p1 = top;
	ListNode* p2 = top->next;
	ListNode* p3 = top;
	if (size > 2) { p3 = p2->next; }
	ListNode* np1 = new ListNode;
	ListNode* np2 = new ListNode;
	np1->entry = p1->entry;
	np2->entry = p2->entry;
	sl1->top = np1;
	sl2->top = np2;
	ListNode* psl1 = sl1->top;
	ListNode* psl2 = sl2->top;
	np1->next = NULL; np2->next = NULL;
	free(p1); free(p2); size -= 2;
	while (size > 2) {
		ListNode* np1 = new ListNode;
		ListNode* np2 = new ListNode;
		np1->next = NULL; np2->next = NULL;
		psl1->next = np1;
		psl2->next = np2;
		p1 = p3; p2 = p3->next; p3 = p2->next;
		psl1 = psl1->next; psl2 = psl2->next;
		np1->entry = p1->entry;
		np2->entry = p2->entry;
		free(p1); free(p2); size -= 2;
	}
	if (size > 1) {
		ListNode* np1 = new ListNode;
		ListNode* np2 = new ListNode;
		np1->next = NULL; np2->next = NULL;
		psl1->next = np1;
		psl2->next = np2;
		p1 = p3; p2 = p3->next;
		np1->entry = p1->entry;
		np2->entry = p2->entry;
		free(p1); free(p2); size -= 2;
	}
	else if (size) {
		ListNode* np1 = new ListNode;
		np1->next = NULL;
		psl1->next = np1;
		np1->entry = p3->entry;
		free(p3); size--;
	}
}
template<class T>void List<T>::deleteListMN(int m, int n) {
	int firstSize = size;
	int rest = size;
	int index = 1;
	int times;
	ListNode* p1 = top->next;
	ListNode* p2 = top;
	while (rest) {
		rest = (size - index);
		if (rest < m) { times = rest; }
		else { times = m; }
		if (size==firstSize) { times -= 1; }
		for (int i = 0; i < times; i++) {
			p1 = p1->next;
			p2 = p2->next;
			index++;
		}
		rest = (size - index);
		if (rest < n) { times = rest; }
		else { times = n; }
		for (int j = 0; j < times; j++) {
			p2->next = p1->next;
			free(p1); size--;
			p1 = p2->next;
		}
	}
}