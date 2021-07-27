#pragma once
#include<iostream>
using namespace std;
template<class T>
class BinaryTree {
	struct TreeNode {
		T treeEntry;
		TreeNode* left;
		TreeNode* right;
	};
	int size;
	TreeNode* root;
	void ifSymmetric2(TreeNode* tl, TreeNode* tr, bool* b);
	void passPostOrder2(TreeNode* tp, void(*pf)(T));
	void passInOrder2(TreeNode* tp, void(*pf)(T));
	void passPreOrder2(TreeNode* tp, void(*pf)(T));
	void TreeMirror2(TreeNode* np);
	void print2D2(TreeNode* np, int depth);
	void printLevelsNodes2(TreeNode* np, int depth, int startLevel, int endLevel);
	void treeHeight2(TreeNode *np,int height, int *maxHeight);
public:
	BinaryTree();
	void insertTree(T element);
	void passPreOrder(void(*pf)(T));
	void passInOrder(void(*pf)(T));
	void passPostOrder(void(*pf)(T));
	bool ifSymmetric();
	void TreeMirror();
	bool ifNodesHaveOneChild();
	void print2D();
	void printLevelsNodes(int startLevel, int endLevel);
	int treeSize();
	int treeHeight();
};
template<class T> BinaryTree<T>::BinaryTree() {
	size = 0; root = NULL;
}
template<class T> void BinaryTree<T>::insertTree(T element) {
	// creat new node
	TreeNode* tp = new TreeNode;
	if (size == 0) { // insert tree root
		tp->treeEntry = element;
		root = tp;
		tp->left = NULL; tp->right = NULL;
	}
	else { // insert ather tree node
		TreeNode* np;
		np = root;
		bool found = 0;
		while (!found) {
			if (element > np->treeEntry) {
				if (np->right != NULL) {
					np = np->right;
				}
				else { found = 1; np->right = tp; }
			}
			else if (element < np->treeEntry) {
				if (np->left != NULL) {
					np = np->left;
				}
				else { found = 1; np->left = tp; }
			}
		}
		tp->treeEntry = element; tp->left = NULL; tp->right = NULL;
	}
	size++;
}
template<class T>void BinaryTree<T>::passPreOrder2(TreeNode* tp, void(*pf)(T)) {
	if (tp) {
		(*pf)(tp->treeEntry);
		passPreOrder2(tp->left, pf);
		passPreOrder2(tp->right, pf);
	}
}
template<class T>void BinaryTree<T>::passPreOrder(void(*pf)(T)) {
	TreeNode* np = root;
	passPreOrder2(np, pf);
}
template<class T>void BinaryTree<T>::passInOrder2(TreeNode* tp, void(*pf)(T)) {
	if (tp) {
		passInOrder2(tp->left, pf);
		(*pf)(tp->treeEntry);
		passInOrder2(tp->right, pf);
	}
}
template<class T>void BinaryTree<T>::passInOrder(void(*pf)(T)) {
	TreeNode* np = root;
	passInOrder2(np, pf);
}
template<class T>void BinaryTree<T>::passPostOrder2(TreeNode* tp, void(*pf)(T)) {
	if (tp) {
		passPostOrder2(tp->left, pf);
		passPostOrder2(tp->right, pf);
		(*pf)(tp->treeEntry);
	}
}
template<class T>void BinaryTree<T>::passPostOrder(void(*pf)(T)) {
	TreeNode* np = root;
	passPostOrder2(np, pf);
}
template<class T>bool BinaryTree<T>::ifSymmetric() {
	TreeNode* tl = root->left;
	TreeNode* tr = root->right;
	bool b = 1;
	ifSymmetric2(tl, tr, &b);
	return b;
}
template<class T>void BinaryTree<T>::ifSymmetric2(TreeNode* tl, TreeNode* tr, bool* b) {
	if (tl && tr) {
		if (tl->right && !tr->right) { *b = 0; }
		else if (!tl->right && tr->right) { *b = 0; }
		else if (tl->left && !tr->left) { *b = 0; }
		else if (!tl->left && tr->left) { *b = 0; }
		ifSymmetric2(tl->left, tr->left, b);
		ifSymmetric2(tl->right, tr->right, b);
	}
}
template<class T>void BinaryTree<T>::TreeMirror() {
	TreeNode* np = root;
	TreeMirror2(np);
}
template<class T>void BinaryTree<T>::TreeMirror2(TreeNode* np) {
	if (np) {
		TreeNode* np2 = np->left;
		np->left = np->right;
		np->right = np2;
		TreeMirror2(np->left);
		TreeMirror2(np->right);
	}
}
template<class T>bool BinaryTree<T>::ifNodesHaveOneChild() {
	TreeNode* nb = root;
	while (nb->right || nb->left) {
		if (nb->right && nb->left) { return 0; }
		else if (nb->right) {
			nb = nb->right;
		}
		else {
			nb = nb->left;
		}
	}
	return 1;
}
template<class T>void BinaryTree<T>::print2D() {
	int depth = 0;
	TreeNode* np = root;
	print2D2(np, depth);
}
template<class T>inline void BinaryTree<T>::printLevelsNodes(int startLevel, int endLevel) {
	int depth = 0;
	TreeNode* np = root;
	printLevelsNodes2(np, depth, startLevel, endLevel);
}
template<class T>inline int BinaryTree<T>::treeSize(){	return size;}
template<class T>inline int BinaryTree<T>::treeHeight(){
	TreeNode* np = root;
	int height = 0, maxHeight=0;
	treeHeight2(np,height, &maxHeight);
	return maxHeight+1;
}
template<class T>void BinaryTree<T>::print2D2(TreeNode* np, int depth) {
	if (np) {
		print2D2(np->right, ++depth);
		depth--;
		for (int i = 0; i < depth; i++) { cout << "\t"; }
		cout << np->treeEntry << endl;
		print2D2(np->left, ++depth);
		depth--;
	}
}
template<class T>inline void BinaryTree<T>::printLevelsNodes2(TreeNode* np, int depth, int startLevel, int endLevel)
{
	if (np) {
		printLevelsNodes2(np->right, ++depth, startLevel, endLevel);
		depth--;
		if (depth >= startLevel && depth <= endLevel) {
			cout << np->treeEntry << "  ";
		}
		printLevelsNodes2(np->left, ++depth, startLevel, endLevel);
		depth--;
	}
}
template<class T>inline void BinaryTree<T>::treeHeight2(TreeNode* np, int height ,int *maxHeight){
	if (np) {
		treeHeight2(np->right, ++height,maxHeight);
		height--;
		if (*maxHeight< height) {
			*maxHeight = height;
		}
		treeHeight2(np->left, ++height, maxHeight);
		height--;
	}
}
