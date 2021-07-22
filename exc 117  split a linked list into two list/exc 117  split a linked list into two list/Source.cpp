#include "Header.h"
using namespace std;
void print(int x) {
	cout << x << "-->";
}
int main() {
	int number = 0;
	List<int> l1;
	List<int> l2;
	List<int> l3;
	cout << " insert element in list l1 " << endl;
	cout << " enter any number to insert and -1 to clone the list " << endl;
	cin >> number;
	while (number != -1) {
		l1.PushList(number, 0);
		l1.PassList(print);
		cout << "null";
		cout << "\n------------------------\n";
		cout << " enter any number to insert and -1 to split the list " << endl;
		cin >> number;
	}
	l1.splitList(&l2,&l3);
	cout << " splited list 1 : \n";
	l2.PassList(print);
	cout << "null";
	cout << " \n splited list 2 : \n";
	l3.PassList(print);
	cout << "null";
}