#include "Tree.h"
void print(TreeEntry e) {
	cout << e << "\t";
}
int main() {
	string line = "\n------------------------------------------------\n";
	Tree t; InitializeTree(&t);
	TreeEntry e;
	while (1) {
		cout << "enter -1 to delete element , -2 to clear tree and any ather number to push it:";
		cin >> e;
		switch (e) {
		case(-1):
			cout << "enter element to delete it :";
			cin >> e;
			if (DeleteItemTree(&t, &e, e)) {
				cout <<"the number "<<e<<"has been deleted \n.";
			}
			else { cout << "can not found number " << e << " .\n"; }
			break;
		case(-2):
			ClearTree(&t);
			cout << " the tree has been cleared .\n";
			break;
		default:
			InsertTree(&t, &e);
			break;
		}
		InOrderRec(&t, print);
		cout << "\ntree depth is :" << TreeDepth(&t) << endl;
		cout << "tree size is :" << TreeSize(&t) << endl;
		cout << line;
	}
}