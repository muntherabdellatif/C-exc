#include"Header.h"
void print(int x) {
	cout << x << "\t";
}
int main() {
	int n = 1;
	BinaryTree<int> bt2;
	while (n)
	{
		cout << "\ninsert element to tree :";
		cin >> n;
		bt2.insertTree(n); 
		bt2.print2D();
	}
}