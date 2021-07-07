#include <iostream>
#include<fstream>
using namespace std;
int main() {
	char counter ;
	fstream fileread("file.txt", ios::in);
	fileread >> counter;
	fileread.close();
	fstream filewrite("file.txt", ios::out);
	counter = counter + 1;
	filewrite << (counter-48);
	filewrite.close();
	cout << counter;
}