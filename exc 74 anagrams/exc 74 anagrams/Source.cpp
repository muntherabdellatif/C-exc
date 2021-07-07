/*
An anagram is a word or phrase formed by rearranging the letters of a different word 
or phrase, typically using all the original letters exactly once.
*/
#include<iostream>
using namespace std;
int checkSize(char word[]);
bool sameSize(char word1[], char word2[]);
bool samelatter(char word1[], char word2[]);
void countLatter(char word1[], char word2[], int wordrep[] , int size);
int main() {
	char word1[20], word2[20];
	cout << "enter 2 word to check if it anagrams or not :" << endl;
	cout << "1 :"; cin >> word1;
	cout << "2 :"; cin >> word2;
	if (sameSize(word1, word2) && samelatter(word1, word2)) {
			cout << " the words is anagrams " << endl;
	}
	else { cout << " the words is not anagrams " << endl; }
}
int checkSize(char word[]) {
	int i = 0;
		for ( ; word[i] !='\0'; i++) {}
	return i;
}
bool sameSize(char word1[], char word2[]) {
	int size1, size2;
	size1 = checkSize(word1);
	size2 = checkSize(word2);
	cout << "word 1 size :" << size1 << endl;
	cout << "word 2 size :" << size2 << endl;
	if (size1 == size2) { return true; }
	return false ;
}
bool samelatter(char word1[], char word2[]) {
	int wordrep1[20] = { 0 }, wordrep2[20] = { 0 };
	int size = checkSize(word1);
	cout << "word 1 later repeat :" << endl;
	countLatter(word1, word1, wordrep1, size);
	cout << "word 2 later repeat :" << endl;
	countLatter(word1, word2, wordrep2, size);
	for (int i = 0; i < size; i++) {
		if (wordrep1[i] != wordrep2[i]) { return false; }
	}
	return true;
}
void countLatter(char word1[], char word2[], int wordrep[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (word1[i] == word2[j]) {
				wordrep[i]++;
			}
		}
		cout << word1[i] << " repeated : " << wordrep[i] << " times " << endl;
	}
}