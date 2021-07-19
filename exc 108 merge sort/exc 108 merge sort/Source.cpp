#include"Header.h"
using namespace std;
void insertionSort(List<int>* l) {
	int size = (*l).listSize();
	int element, index, number;
	for (int i = 1; i < size; i++) {
		(*l).deleteList(&element, i); index = i;
		for (int j = 0; j < i; j++) {
			(*l).getElementList(&number, j);
			if (number > element) { index = j; j = i; }
		}
		(*l).insertList(element, index);
	}
}
void print(int x) {
	cout << x << "\t";
}
void Marge(List<int>* l, List<int>* l1, List<int>* l2) {
	int index1 = 0, index2 = 0 , index3=0;
	int element1, element2;
	int size1 = (*l1).listSize();
	int size2 = (*l2).listSize();
	(*l1).getElementList(&element1, index1);
	(*l2).getElementList(&element2, index2);
	while (index1<size1 && index2<size2 ) {
		if (element1 <= element2) {
			(*l).insertList(element1, index3);
			index1++; index3++;
			(*l1).getElementList(&element1, index1);
		}
		else {
			(*l).insertList(element2, index3);
			index2++; index3++;
			(*l2).getElementList(&element2, index2);
		}
	}
	while (index1 < (size1)) {
		(*l).insertList(element1, index3);
		index1++; index3++;
		(*l1).getElementList(&element1, index1);
	}
	while (index2 < (size2)) {
		(*l).insertList(element2, index3);
		index2++; index3++;
		(*l2).getElementList(&element2, index2);
	}
}
int main() {
	string line = "\n-----------------------------------\n";
	int size, number;
	// define 2 list
	cout << "enter your list size :";
	cin >> size;
	int size1 = size / 2;
	int size2 = size / 2 + size % 2;
	List<int> l1(size1);
	List<int> l2(size2);
	// insert element in lists
	int counter = 0;
	cout << " enter list element value :" << endl;
	while (counter < size) {
		cout << counter + 1 << " :";
		cin >> number;
		if (counter < size1) {
			l1.insertList(number, counter);
		}
		else {
			l2.insertList(number, (counter-size1));
		}
		counter++;
	}
	// sort the lists
	cout << "\n your list 1 befor sorting \n";
	l1.passList(print);
	cout << "\n your list 1 after sorting\n";
	insertionSort(&l1);
	l1.passList(print);
	cout << line;
	cout << "\n your list 2 befor sorting \n";
	l2.passList(print);
	cout << "\n your list 2 after sorting\n";
	insertionSort(&l2);
	l2.passList(print);
	// marge lists 
	List<int> l(size);
	Marge(&l, &l1, &l2);
	cout << line;
	cout << "\n your lists after merging \n";
	l.passList(print);
}