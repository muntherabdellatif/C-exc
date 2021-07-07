#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void play(int timer);
void main() {
	int timer=0,playagain=1;
	play(0);
	while (playagain) {
		int y=0;
		cin >> y;
		if (y == 1) { play(0); }
		else { playagain = 0; }
	}
}
void play(int timer) {
	static int x, y;
	bool answer = false;
	srand(time(0));
	x = rand() % 100;
	cout << "I put a number in my mind between 0 and 100 , Guess what it is : " << endl;
	while (answer == false) {
		cin >> y;
		timer++;
		if (x > y) { cout << "No the number is bigger  , Try again :" << endl; }
		else if (x < y) { cout << "No the number is smaller , Try again :" << endl; }
		else { cout << "Well this is the number :) ." << endl; answer = true; }
	}
	cout << "You tried " << timer << "times" << endl;
	cout << "Press 1 to continue and 0 to stop this game ." << endl;
}