#include "Tree.h"
void InitializeTree(Tree* pt) {
	*pt = NULL;
}
void ClearTreeAux(Tree* pt) {
	if (*pt) {
		ClearTree(&(*pt)->left);
		ClearTree(&(*pt)->right);
		free(*pt);
    }
}
void ClearTree(Tree* pt) {
	ClearTreeAux(pt);
	*pt = NULL;
}
int TreeSize(Tree* pt) {
	if (!(*pt)) {
		return 0;
    }
	return (1 + TreeSize(&(*pt)->left) + TreeSize(&(*pt)->right));
}
int TreeDepth(Tree* pt) {
	if (!(*pt)) {
		return 0;
    }
	int a = TreeDepth(&(*pt)->left);
	int b = TreeDepth(&(*pt)->left);
	return (a > b ? 1 + a : 1 + b);
}
void PreOrderRec(Tree* pt,void (*pf)(TreeEntry)) {

}
void InOrderRec(Tree* pt, void(*pf)(TreeEntry)) {
	if (*pt) {
		InOrderRec(&(*pt)->left, pf);
		(*pf)((*pt)->entry);
		InOrderRec(&(*pt)->right, pf);
	}
}
void PostOrderRec(Tree* pt,void (*pf)(TreeEntry)) {

}
bool TreeEmpty(Tree* pt) {
	return (!*pt);
}
bool TreeFull(Tree* pt) {
	return 0;
}
int InsertTree(Tree* pt, TreeEntry* pe) {
	static int depth =0 ;
	if (!*pt) {
		*pt = (Tree)malloc(sizeof(TreeNode));
		(*pt)->entry = *pe;
		(*pt)->left = NULL;
		(*pt)->right = NULL;
		return depth;
	}
	else if (*pe < ((*pt)->entry)) {
		InsertTree(&(*pt)->left, pe);
	}
	else {
		InsertTree(&(*pt)->right, pe); 
	}
	depth++;
}
bool findElementRec(Tree* pt, TreeEntry* pe,int element) {
	if (!*pt) {
		return 0;
	}
	if ((*pt)->entry == element ) {
		*(pe) = (*pt)->entry;
		return 1;
	}
	else if (element < (*pt)->entry) {
		return findElement(&(*pt)->left, pe, element);
	}
	else {
		return findElement(&(*pt)->right, pe, element);
	}
}
bool findElement(Tree* pt, TreeEntry* pe, int element) {
	bool found = 0;
	TreeNode* p = *pt;
	while (p && !found) {
		if (element < p->entry) {
			p = p->left;
		}
		else { p=p->right; }
		found = (p->entry == element);
	}
	return found;
}
