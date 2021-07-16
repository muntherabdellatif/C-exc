#include"Header.h"
using namespace std;
void print(int x) {
	cout << x << "\t";
}
int main() {
	string S_number = "\n1\t2\t3\t4\t5\t6\t7\t8\n";
	string Line = "-----------------------------------------------------------\n";
	List<int> l;
	int e;
	while (1) {
		cout << " enter 1 to insert , 2 to delete , 3 to destroy list , 4 to reverse list : ";
		int number;
		int pointer;
		cin >> number;
		switch (number) {
		case (1):
			cout << " enter element : ";
			cin >> e;
			cout << "enter postion : ";
			cin >> pointer;
			l.PushList(e, pointer - 1);
			break;
		case (2):
			cout << "enter postion : ";
			cin >> pointer;
			l.PupList(&e, pointer - 1);
			cout << " the number " << e << " is deleted ." << endl;
			break;
		case (3):
			l.ClearList();
			cout << " the list is destroyed . ";
			break;
		case(4):
			l.ReverseList();
			cout << " the list is reversed . "<<endl;
			break;
		}
		l.PassList(print);
		cout << S_number << Line;
	}
}