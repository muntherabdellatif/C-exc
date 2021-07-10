#include"List.h"

void InitioalizeList(List* pl) {
	pl->size = 0;
}
bool ListEmpth(List* pl) {
	return (!pl->size);
}
bool ListFull(List* pl) {
	return (pl->size == MaxList);
}
int ListSize(List* pl) {
	return (pl->size);
}
void DestroyList(List* pl) {
	pl->size = 0;
}
bool InsertList(int iPointer, ListEntry e, List* pl) {
	if (pl->size < MaxList) {
		int i;
		for (i = pl->size-1 ; i >= iPointer; i--) {
			pl->entry[i+1] = pl->entry[i];
		}
		pl->entry[iPointer] = e;
		pl->size++;
		return 1;
	}
	return 0;
}
bool Deletelist(int dPointer, ListEntry* pe, List* pl) {
	if (pl->size > 0) {
		int i;
		*pe = pl->entry[dPointer];
		for (i = dPointer; i < pl->size; i++) {
			pl->entry[i] = pl->entry[i + 1];
		}
		pl->size--;
		return 1;
	}
	return 0;
}
bool TraverseList(List* pl, void(*pf)(ListEntry)) {
	if (pl->size > 0) {
		for (int i = 0; i < pl->size; i++) {
			(*pf)(pl->entry[i]);
		}
		return 1;
	}
	return 0;
}
void RetrieveList(int rPointer, ListEntry* pe, List* pl) {
	*pe = pl->entry[rPointer];
}
void ReplaceList(int rPointer, ListEntry e, List* pl) {
	pl->entry[rPointer] = e;
}