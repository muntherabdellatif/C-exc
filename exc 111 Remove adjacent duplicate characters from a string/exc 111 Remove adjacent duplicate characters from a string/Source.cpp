#include<iostream>
using namespace std;
void deleteStr(char Mystring[], int size, int index) {
	for (int i = index; i < size-1; i++) {
		Mystring[i] = Mystring[i+1];
	}
}
void RemoveDup(char Mystring[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (Mystring[i] == Mystring[j]) {
				deleteStr(Mystring,size,j);
				size--;
				Mystring[size] = '\0';
			}
		}
	}
}
int main() {
	int size = 1;
	char Mystring[20];
	cout << " enter string" << endl;
	cin >> Mystring;
	for (; Mystring[size] != '\0'; size++);
	RemoveDup(Mystring ,size);
	cout << Mystring;
}