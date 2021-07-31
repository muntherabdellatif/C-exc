#include<iostream>
#include<string.h>
using namespace std;
int main() {
	string i , name="\0",password="\0";
	while (name == "\0") {
		cout << " enter user name : ";
		cin >> i;
		try {
			if (i[0] >= '0' && i[0] <= '9') {
				throw (1);
			}
			name = i;
		}
		catch (int x) {
			cout << "_____________________________________________________\n";
			if (x == 1) {
				cout << "your name should not start with number" << endl;
				cout << "enter your name again" << endl;
			}
			cout << "_____________________________________________________\n";
		}
	}
	while (password == "\0") {
		cout << " enter user password : ";
		cin >> i;
		try {
			if (i.length()<8) {
				throw (1);
			}
			static bool CabitalLetters = 0, smallLatter=0, number = 0;
			for (int j = 0; j < i.length(); j++) { 
				if (i[j] >= 'a' && i[j] <= 'z') { smallLatter = 1; }
				if (i[j] >= 'A' && i[j] <= 'Z') { CabitalLetters = 1; }
				if (i[j] >= '0' && i[j] <= '9') { number = 1; }
			}
			if (CabitalLetters == 0) {throw (2);}
			if (smallLatter == 0) {throw (3);}
			if (number == 0) {throw (4);}
			password = i;
		}
		catch (int x) {
			cout << "_____________________________________________________\n";
			if (x == 1) {
				cout << "Password must contain more than 8 characters " << endl;
			}
			if (x == 2) {
				cout << "Password must contain cabital latters " << endl;
			}
			if (x == 3) {
				cout << "Password must contain small latters " << endl;
			}
			if (x == 4) {
				cout << "Password must contain numbers" << endl;
			}
			cout << "enter your password again" << endl;
			cout << "_____________________________________________________\n";
		}
	}
	cout << "_____________________________________________________\n";
	cout << "your name is :" << name <<endl;
	cout << " your password is :" << password;
}
