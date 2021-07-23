#pragma once
#include<iostream>
using namespace std;
#define TreeEntry int

typedef struct treeNode {
	TreeEntry entry;
	struct treeNode* left, * right;
}TreeNode;

typedef TreeNode* Tree;
void InitializeTree(Tree* pt);
void ClearTree(Tree* pt);
void ClearTreeAux(Tree* pt);
int TreeSize(Tree* pt);
int TreeDepth(Tree* pt);
void InOrderRec(Tree* pt, void(*pf)(TreeEntry));
void PreOrderRec(Tree* pt, void(*pf)(TreeEntry));
void sumTree(Tree* pt);
void sumTree2(Tree* pt, int *sum );
bool ifIdentical2(Tree* pt1, Tree* pt2);
bool ifIdentical(Tree* pt1, Tree* pt2);
bool TreeEmpty(Tree* pt);
bool TreeFull(Tree* pt);
int InsertTree(Tree* pt, TreeEntry* pe);
bool findElementRec(Tree* pt, TreeEntry* pe, int pos);
bool findElement(Tree* pt, TreeEntry* pe, int pos);
bool DeleteItemTree(Tree* pt, TreeEntry* pe, int element);
void DeleteNodeTree(Tree* pn);