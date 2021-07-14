#include"Stack.h"
/*
template<class T> stack<T>::stack() {
	Top = NULL;
	size = 0;
}
template<class T> bool stack<T>::StackPush(T element) {
	Node* newNodePtr = new Node;
	if (newNodePtr == NULL) {
		//cout << " can not allocate memeory";
		return 0;
	}
	newNodePtr->value = element;
	newNodePtr->next = Top;
	Top = newNodePtr;
	size++;
	return 1;
}
template<class T> bool stack<T>::Stackpop(T* element) {
	if (!size) { return 0; }
	Node* temp = new Node;
	temp = Top;
	*element = temp->value;
	Top = Top->next;
	temp = temp->next = NULL;
	delete temp;
	size--;
	return 1;
}
template<class T> bool stack<T>::isEmpty() {
	return !size;
}
template<class T> bool stack<T>::StackTop(T* element) {
	if (!size) { return 0; }
	*element = Top->value;
	return 1;
}
template<class T> void stack<T>::clearStack() {
	Node* temp = new Node;
	temp = Top;
	while (size)
	{
		Top = Top->next;
		temp = temp->next = NULL;
		delete temp;
		size--;
	}
}
template<class T> bool stack<T>::isFull() { return 0; }
template<class T> void stack<T>::PassStack(void(*pf)(T)) {
	int n = size;
	Node* temp = new Node;
	temp = Top;
	while (n) {
		(*pf)(temp->value);
		temp = temp->next;
		n--;
	}
}
template<class T> int stack<T>::StackSize() {
	return size;
}
*/