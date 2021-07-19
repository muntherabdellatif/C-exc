#include"Header.h"
using namespace std;
void insertionSort(List<int> *l) {
	int size = (*l).listSize();
	int element,index,number;
	for (int i = 1; i < size; i++) {
		(*l).deleteList(&element, i); index = i;
		for (int j = 0; j < i; j++) {
			(*l).getElementList(&number, j);
			if (number > element) { index = j; j = i;}
		}
		(*l).insertList(element, index);
	}
}
void print(int x) {
	cout << x << "\t";
}
int main() {
	int size, number;
	cout << "enter your list size :";
	cin >> size;
	List<int> l(size);
	int counter = 0;
	cout << " enter list element value :" << endl;
	while (counter < size) {
		cout << counter + 1 << " :";
		cin >> number;
		l.insertList(number, counter);
		counter++;
	}
	cout << "\n your list befor sorting \n";
	l.passList(print);
	cout << "\n your list after sorting\n";
	insertionSort(&l);
	l.passList(print);
}