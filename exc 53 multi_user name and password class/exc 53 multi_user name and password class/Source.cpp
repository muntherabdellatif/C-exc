#include"User.h"
User user[5];
int main() {
	for (int i = 0; i < 5; i++) {
		User newUser;
		newUser.enterName();
		newUser.enterPassword();
		user[i] = newUser;
		user[i].printInfo();
	}
}