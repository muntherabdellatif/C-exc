/*
       5
    3     7
  2  4   6  8
paths :
{5,3,2}
{5,3,4}
{5,7,6}
{5,7,8}
*/
#include "Header.h"
void print(int x) {
    cout <<" <- " << x;
}
void print2(int x) {
    cout << x <<"\t";
}
int main() {
    int element[7] = { 5,7,3,8,6,4,2 };
    BinaryTree<int> bt;
    for (int i = 0; i < 7; i++) { bt.insertTree(element[i]); }
    cout << " tree : \n";
    bt.passInOrder(print2);
    cout << "\ntree pathes\n";
    bt.printPaths(print);
}