#include"Header.h"
void print(int x) {
	cout << x << "\t";
}
int main() {
	BinaryTree<int> bt;
	int i = 1;
	while (i) {
		cout << "\ninsert element to tree :";
		cin >> i;
		bt.insertTree(i);
		cout << "\ntree : " << endl;
		bt.print2D();
		cout << "\n min tree depth is :" << bt.treeMinDepth();
	}
}