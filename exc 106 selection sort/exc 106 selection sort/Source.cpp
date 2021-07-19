#include"Header.h"
using namespace std;
void print(int x) {
	cout << x << "\t";
}
void selectionSort(List<int>* l) {
	int element;
	int size = (*l).listSize();
	int firstElement ,index;
	for (int i = 0; i < size; i++) {
		(*l).getElementList(&firstElement, i); index = i;
		for (int j = i+1; j < size; j++) {
			(*l).getElementList(&element, j);
			if (firstElement > element) { firstElement = element; index = j; }
		}
		(*l).getElementList(&firstElement, i);
		(*l).getElementList(&element,index);
		(*l).replaceElementList(&firstElement, index);
		(*l).replaceElementList(&element, i);
	}
}
int main() {
	int size, number;
	cout << "enter your list size :";
	cin >> size;
	List<int> l(size);
	int counter = 0;
	cout << " enter list element value :" << endl;
	while (counter < size) {
		cout << counter+1 << " :";
		cin >> number;
		l.insertList(number, counter);
		counter++;
	}
	cout << "\n your list befor sorting \n";
	l.passList(print);
	cout << "\n your list after sorting\n";
	selectionSort(&l);
	l.passList(print);
}