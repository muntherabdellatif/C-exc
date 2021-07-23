#include"Header.h"
using namespace std;
void print(int x) {
	cout << x << "\t";
}
int main() {
	int x[11] = { 6,3,9,2,4,10,8,1,5,7,11 };//symmetric tree
	int y[11] = { 6,3,9,2,4,10,8,1,5,7,0 };//non symmetric tree
	int z[11] = { 6,3,9,2,4,10,8,15,5,7,11 };//non symmetric tree
	BinaryTree<int> xt; BinaryTree<int> yt; BinaryTree<int> zt;
	for (int i = 0; i < 11; i++) {
		xt.insertTree(x[i]);
		yt.insertTree(y[i]);
		zt.insertTree(z[i]);
	}
	cout << " x :\t"; xt.passInOrder(print);
	if (xt.ifSymmetric()) {cout << "\nthe tree x is symmetric\n ";}
	else{ cout << "\nthe tree x is not symmetric\n "; }
	cout << "y :\t"; yt.passInOrder(print);
	if (yt.ifSymmetric()) { cout << "\nthe tree y is symmetric\n "; }
	else { cout << "\nthe tree y is not symmetric\n "; }
	cout << "z :\t"; zt.passInOrder(print);
	if (zt.ifSymmetric()) { cout << "\nthe tree z is symmetric\n "; }
	else { cout << "\nthe tree z is not symmetric\n "; }
}