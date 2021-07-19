#include"Header.h"
void print(string name, int mark) {
	cout << "studant " << name << " :" << mark <<endl;
}
int main() {
	string name;
	string line = "\n-----------------------------------\n";
	int mark;
	BinaryTree studant;
	while (1) {
		cout << " enter studant name :";
		cin >> name;
		cout << " enter studant mark :";
		cin >> mark;
		cout << line;
		studant.insertTree(mark, name);
		studant.passInOrder(print);
		cout << line;
	}
}