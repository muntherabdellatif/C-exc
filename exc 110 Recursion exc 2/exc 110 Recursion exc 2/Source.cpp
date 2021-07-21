/*
Write a recursive function that takes a string and reverse the string.
*/
#include<iostream>
using  namespace std;
void reverseString(char name[] , char R_name[]) {
	static int counter = 0;
	static int counter2 = 0;
	if (name[counter]!='\0'){
		counter++;
		reverseString(name,R_name);
		counter--;
	    R_name[counter2]=name[counter];
		counter2++;
	}
}
int main() {
	char name[] = "monther";
	char R_name[] = "monther";
	reverseString(name, R_name);
	cout << name << "\t"<< R_name;
}