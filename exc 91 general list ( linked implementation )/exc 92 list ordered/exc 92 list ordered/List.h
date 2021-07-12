#pragma once
#include<iostream>
using namespace std;
#define MaxList 8
#define ListEntry int

typedef struct nodeList {
	ListEntry entry;
	struct nodeList* next;
}NodeList;

typedef struct list {
	NodeList* head;
	int size;
}List;

void InitioalizeList(List* pl);
bool ListEmpth(List* pl);
bool ListFull(List* pl);
int ListSize(List* pl);
void DestroyList(List* pl);
bool InsertList(int iPointer, ListEntry e, List* pl);
bool Deletelist(int dPointer, ListEntry* pe, List* pl);
bool TraverseList(List* pl, void(*pf)(ListEntry));
bool RetrieveList(int rPointer, ListEntry* pe, List* pl);
bool ReplaceList(int rPointer, ListEntry e, List* pl);