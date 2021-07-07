#include <iostream>
using namespace std;
void main() {
	char firstName[20];
	char dadName[20];
	char grandfatherName[20];
	char family[20];
	cout << "enter your fall name (example : Munther saleh iprahim abdellatif ) :" << endl;
	cin >> firstName;
	cin >> dadName;
	cin >> grandfatherName;
	cin >> family;
	cout << "your name is " << firstName <<endl;
	cout << "your dad name is " << dadName <<endl;
	cout << "your grandfather name is " << grandfatherName <<endl;
	cout << "your family name is " << family <<endl;
}