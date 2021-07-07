#include "User.h"
/* constracter
User::User(string n, string p) {
	name = n; password = p;
}*/
// setter
void User::setName(string n) {
	name = n;
}
void User::setPassword(string p) {
	password = p;
}
// getter
string User::getName() {
	return name;
}
string User::getPassword() {
	return password;
}
// function
void User::printInfo() {
	cout << " user name :" << name << endl;
	cout << " password :" << password << endl;
}
string User::enterName() {
	cout << "enter user name :";
	cin >> name;
	return name;
}
string User::enterPassword() {
	cout << "enter password :";
	cin >> password;
	return password;
}
