#include"Header.h"
void print(int x) {
	cout << x << "\t";
}
int main() {
	int tree[10] = { 5,3,2,4,10,8,12,7,9,11 };
	BinaryTree<int> bt;
	for (int i = 0; i < 10; i++) { bt.insertInOrderTree(tree[i]); }
	cout << " tree : " << endl;
	bt.print2D();
	int n = 1;
	while (n) {
		cout << "\n enter k to find K'th smallist  node  :";
		cin >> n;
		cout<<bt.smallestKthNode(n);
	}
}