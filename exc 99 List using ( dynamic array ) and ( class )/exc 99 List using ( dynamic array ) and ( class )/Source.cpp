#include "Header.h"
using namespace std;
void  print(int x) {
	cout << x << "\t";
}
int main() {
	int size;
	string S_number = "\n1\t2\t3\t4\t5\t6\t7\t8\n";
	string Line = "-----------------------------------------------------------\n";
	cout << "enter the size of list :";
	cin >> size;
	List<int> l(size); 
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
			if (!l.isFull()) {
				if (l.insertList(e, pointer - 1)) {
					// cout << e << " is inserted to postion " << pointer << endl;
				}
			}
			break;
		case (2):
			cout << "enter postion : ";
			cin >> pointer;
			if (!l.isFull()) { l.deleteList(&e,pointer - 1); }
			cout << " the number " << e << " is deleted ." << endl;
			break;
		case (3):
			l.clearList();
			cout << " the list is destroyed . ";
			break;
		}
		if (l.passList( print)) {
			// cout << "Traverse List done" << endl;
		};
		cout << S_number << Line;
	}
}