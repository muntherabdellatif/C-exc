#include "Header.h"
using namespace std;
void print(int x) {
	cout << x << "-->";
}
int main() {
	int number = 0;
	List<int> l1;
	List<int> l2;
	cout << " insert element in list l1 " << endl;
	cout << " enter any number to insert and -1 to clone the list " << endl;
	cin >> number;
	while (number != -1) {
		l1.PushList(number, 0);
		l1.PassList(print);
		cout << "null";
		cout << "\n------------------------\n";
		cout << " enter any number to insert and -1 to clone the list " << endl;
		cin >> number;
	}
	l1.cloneList(&l2);
	cout << " cloned list : \n";
	l2.PassList(print);
	cout << "null";
}