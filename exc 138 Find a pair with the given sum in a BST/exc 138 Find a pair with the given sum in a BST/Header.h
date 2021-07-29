#include<iostream>
#include<cmath>
using namespace std;
template<class T> class BinaryTree {
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
	void treeHeight2(TreeNode* np, int height, int* maxHeight);
	void treeMinDepth2(TreeNode* np, int depth, int* MinDepth);
	void FindBSTrec2(TreeNode* np, T element, bool* found);
	void sumPair2(TreeNode* np1, int sum);
	void sumPair3(TreeNode* np1, TreeNode* np2 , int sum);
public:
	BinaryTree();
	void insertTree(T element);
	void insertInOrderTree(T element);
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
	int treeMinDepth();
	bool FindBST(T);
	bool FindBSTrec(T);
	void sumPair(int sum);
};
template<class T> BinaryTree<T>::BinaryTree() {
	size = 0; root = NULL;
}
template<class T>inline void BinaryTree<T>::insertTree(T element) {
	TreeNode* newNode = new TreeNode;
	newNode->left = newNode->right = NULL;
	newNode->treeEntry = element;
	TreeNode* np;
	np = root;
	int n = 1;
	if (size > 0) {
		int depth = log2(size + 1);
		int postion = size + 1;
		int* path = new int[depth];
		for (int i = 0, j = postion; i < depth; i++, j = j / 2) { path[i] = j; }
		for (int i = depth; i > 0; i--) {
			if (i == 1) {
				if (path[i - 1] == (n * 2)) { np->left = newNode; }
				else if (path[i - 1] == (n * 2 + 1)) { np->right = newNode; }
			}
			else {
				if (path[i - 1] == (n * 2)) { n = n * 2; np = np->left; }
				else if (path[i - 1] == (n * 2 + 1)) { n = n * 2 + 1; np = np->right; }
			}
		}
	}
	else {
		root = newNode;
	}
	size++;
}
template<class T> void BinaryTree<T>::insertInOrderTree(T element) {
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
template<class T>inline int BinaryTree<T>::treeSize() { return size; }
template<class T>inline int BinaryTree<T>::treeHeight() {
	TreeNode* np = root;
	int height = 0, maxHeight = 0;
	treeHeight2(np, height, &maxHeight);
	return maxHeight + 1;
}
template<class T>inline int BinaryTree<T>::treeMinDepth() {
	int depth = 0, MinDepth = size;
	TreeNode* np = root;
	treeMinDepth2(np, depth, &MinDepth);
	return MinDepth;
}
template<class T>inline bool BinaryTree<T>::FindBST(T element)
{
	TreeNode* np;
	np = root;
	while (np) {
		if (np->treeEntry == element) {
			return 1;
		}
		else if (np->treeEntry > element) {
			np = np->left;
		}
		else { np = np->right; }
	}
	return false;
}
template<class T>inline bool BinaryTree<T>::FindBSTrec(T element)
{
	bool found = 0;
	TreeNode* np;
	np = root;
	FindBSTrec2(np, element, &found);
	return found;
}
template<class T>inline void BinaryTree<T>::sumPair(int sum){
	TreeNode* np=root;
	sumPair2(np,sum);
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
template<class T>inline void BinaryTree<T>::treeHeight2(TreeNode* np, int height, int* maxHeight) {
	if (np) {
		treeHeight2(np->right, ++height, maxHeight);
		height--;
		if (*maxHeight < height) {
			*maxHeight = height;
		}
		treeHeight2(np->left, ++height, maxHeight);
		height--;
	}
}
template<class T>inline void BinaryTree<T>::treeMinDepth2(TreeNode* np, int depth, int* MinDepth) {
	if (np) {
		if (!(np->left) && !(np->right)) {
			if (*MinDepth > depth) {
				*MinDepth = depth;
			}
		}
		treeMinDepth2(np->left, ++depth, MinDepth);
		depth--;
		treeMinDepth2(np->right, ++depth, MinDepth);
		depth--;
	}

}
template<class T>inline void BinaryTree<T>::FindBSTrec2(TreeNode* np, T element, bool* found) {
	if (np && !*found) {
		if (np->treeEntry == element) { *found = 1; }
		if (np->treeEntry > element) { FindBSTrec2(np->left, element, found); }
		else { FindBSTrec2(np->right, element, found); }
	}
}
template<class T>inline void BinaryTree<T>::sumPair2(TreeNode* np1,int sum){
	if (np1) {
		sumPair2(np1->left,sum);
		TreeNode* np2 = root;
		sumPair3(np1,np2,sum);
		sumPair2(np1->right,sum);
	}
}
template<class T>inline void BinaryTree<T>::sumPair3(TreeNode* np1, TreeNode* np2 , int sum){
	if (np2) {
		sumPair3(np1,np2->left,sum);
		if ((np1->treeEntry + np2->treeEntry) == sum) {
			cout << "(" << np1->treeEntry << "," << np2->treeEntry << ")  "; }
		sumPair3(np1,np2->right,sum);
	}
}
