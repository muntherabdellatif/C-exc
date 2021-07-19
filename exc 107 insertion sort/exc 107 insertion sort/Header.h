#pragma once
#include <iostream>
template<class T>
class List {
	int maxSize;
	int size;
	T* listArray;
public:
	List(int arraySize);
	bool insertList(T element, int position);
	bool deleteList(T* element, int position);
	void clearList();
	int listSize();
	bool isEmpty();
	bool isFull();
	bool getElementList(T* element, int  position);
	bool replaceElementList(T* element, int  position);
	bool passList(void(*pf)(T element));
};
template<class T>List<T>::List(int arraySize) {
	size = 0; maxSize = arraySize;
	listArray = new T[arraySize];
}
template<class T>bool List<T>::insertList(T element, int  position) {
	if (position <= size && size < maxSize) {
		for (int i = size; i > position; i--) {
			listArray[i] = listArray[i - 1];
		}
		listArray[position] = element;
		size++;
		return 1;
	}
	return 0;
}
template<class T>bool List<T>::deleteList(T* element, int  position) {
	if (size) {
		*element = listArray[position];
		for (int i = position; i < (size - 1); i++) {
			listArray[i] = listArray[i + 1];
		}
		size--;
		return 1;
	}
	return 0;
}
template<class T>void List<T>::clearList() {
	size = 0;
}
template<class T>int List<T>::listSize() {
	return size;
}
template<class T>bool List<T>::isEmpty() {
	return (!size);
}
template<class T>bool List<T>::isFull() {
	return (size >= maxSize);
}
template<class T>bool List<T>::getElementList(T* element, int  position) {
	if (size) {
		*element = listArray[position];
		return 1;
	}
	return 0;
}
template<class T>bool List<T>::replaceElementList(T* element, int  position) {
	if (size) {
		listArray[position] = element;
		return 1;
	}
	return 0;
}
template<class T>bool List<T>::passList(void(*pf)(T element)) {
	if (size) {
		for (int i = 0; i < size; i++) {
			(*pf)(listArray[i]);
		}
		return 1;
	}
	return 0;
}