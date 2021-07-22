/*
Input:  technique, technician, technology, technical
Output: The longest common prefix is techn

Input:  techie delight, tech, techie, technology, technical
Output: The longest common prefix is tech
*/
#include<iostream>
#include"Header.h"
using namespace std;
void print(char x) {
	cout << x ;
}
int findMinLetterNumber(string words[], int size) {
	int min = words[0].length();
	for (int i = 1; i < size; i++) {
		if (min > words[i].length()) { min = words[i].length(); }
	}
	return min;
}
void FindLCP(string words[],int size, Queue<char>* q) {
	int size2 = findMinLetterNumber(words,size);
	for (int letter = 0; letter < size2; letter++) {
		bool a = 1;
		for (int word = 1; word < size; word++){
			if (words[0][letter] != words[word][letter]) {
				a = 0; letter = size2;
		    }
        }
		if (a) {
			(*q).QueuePush(words[0][letter]);
		}
	}
}
int main() {
	 string words[] = { "technique", "technician", "technology", "technical" };
	 string words2[] = { "techie delight", "tech", "techie", "technology","technical"};
	 Queue<char> q;
	 FindLCP(words,4, &q);
	 cout << "The longest common prefix is : ";
	 q.PassQueue(print);
	 cout << endl;
	 Queue<char> q2;
	 FindLCP(words2, 5, &q2);
	 cout << "The longest common prefix is : ";
	 q2.PassQueue(print);
}