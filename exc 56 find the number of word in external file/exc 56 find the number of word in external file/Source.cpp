#include<iostream>
#include<fstream>
using namespace std;
int main() {
	int counter=0;
	string str;
	fstream readfile("C:\\Users\\lion heart\\Documents\\Cpp\\exc 56 find the number of word in external file\\exc 56 find the number of word in external file\\file.txt", ios::in);
	while (readfile >> str) {
		counter++;
		cout << str << " ";
	} 
	cout << endl << " the file has " << counter << " of words ";
}