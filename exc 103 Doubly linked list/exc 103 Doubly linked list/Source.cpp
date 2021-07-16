#include"Header.h"
using namespace std;
void print(int x) {
	cout << x << "\t";
}
int main() {
	string S_number = "\n1\t2\t3\t4\t5\t6\t7\t8\n";
	string Line = "-----------------------------------------------------------\n";
	DoublyList<int> l;
	int e;
	while (1) {
		cout << " enter 1 to insert , 2 to delete , 3 to destroy list : ";
		int number;
		int pointer;
		cin >> number;
		switch (number) {
		case (1):
			cout << " enter element : ";
			cin >> e;
			cout << "enter postion : ";
			cin >> pointer;
			l.InsertList(e, pointer - 1);
			break;
		case (2):
			cout << "enter postion : ";
			cin >> pointer;
			l.PupList(&e, pointer - 1);
			cout << " the number " << e << " is deleted ." << endl;
			break;
		case (3):
			l.clearList();
			cout << " the list is destroyed . ";
			break;
		}
		l.passList(print);
		cout << S_number << Line;
	}
}