/*
    tree    | tree mirror
      5     |      5     
   3     7  |   7     3  
  2 4   6 8 |  8 6   4 2
  tree   preOrder 5  3  2  4  7  6  8
  mirror preOrder 5  7  8  6  3  4  2   
*/
#include "Header.h"
using namespace std;
void print(int x) {
    cout << x << "\t";
}
int main() {
    int element[7] = { 5,7,3,8,6,4,2 };
    BinaryTree<int> bt;
    for (int i = 0; i < 7; i++) { bt.insertTree(element[i]);}
    cout << " tree : \n";
    bt.passPreOrder(print);
    bt.TreeMirror();
    cout << "\n tree mirror : \n";
    bt.passPreOrder(print);
}