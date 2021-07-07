#include"User.h"
User user[5];
fstream fout("users.txt", ios::out);
int main() {
	for (int i = 0; i < 5; i++) {
		User newUser;
		newUser.enterName();
		newUser.enterPassword();
		user[i] = newUser;
	}
	for (int i = 0; i < 5; i++) {
		fout << "user " << i+1 << " name is :" << user[i].getName() << endl;
		fout << "user " << i+1 << " password is :" << user[i].getPassword() << endl;
	}
	fout.close();
}