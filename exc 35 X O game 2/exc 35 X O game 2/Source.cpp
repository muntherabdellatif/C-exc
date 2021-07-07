#include<iostream>
using namespace std;
char c[9] = { '1','2','3','4','5','6','7','8','9' };
void drow();
void replace(int,char);
char checkWinner(char);
void play();
char winner = 'w';
void main() {
	int input;
	do {
		for (int i = 0; i < 9; i++) {
			c[i] = i + 49;
		}
		drow();
		play();
		cout << "do you want to play again :" << endl;
		cout << "input 1 : to play again and 0 to stop " << endl;
		cin >> input;
	} while (input==1);
}
void drow() {
	cout << "\t" << c[0] << "\t|\t" << c[1] << "\t|\t" << c[2] << "\t|\t"<<endl;
	cout << "-------------------------------------------------"<<endl;
	cout << "\t" << c[3] << "\t|\t" << c[4] << "\t|\t" << c[5] << "\t|\t"<<endl;
	cout << "-------------------------------------------------"<< endl;
	cout << "\t" << c[6] << "\t|\t" << c[7] << "\t|\t" << c[8] << "\t|\t"<<endl;
	cout << "-------------------------------------------------"<< endl;
}
void replace(int i ,char j) {
	c[i - 1] = j;
}
char checkWinner(char a) {
	if       (c[0] == a && c[1] == a && c[2] == a) { return a; }
	else if  (c[3] == a && c[4] == a && c[5] == a) { return a; }
	else if  (c[6] == a && c[7] == a && c[8] == a) { return a; }
	else if  (c[0] == a && c[3] == a && c[6] == a) { return a; }
	else if  (c[1] == a && c[4] == a && c[7] == a) { return a; }
	else if  (c[2] == a && c[5] == a && c[8] == a) { return a; }
	else if  (c[0] == a && c[4] == a && c[8] == a) { return a; }
	else if  (c[6] == a && c[4] == a && c[2] == a) { return a; }
	else { return 'w'; }
}
void play() {
	int counter = 0;
	bool continueGame = 1;
	int input;
	while (continueGame) {
		cout << "input number from 1 to 9 " << endl;
		if (counter % 2 == 0) { cout << "player1 :"; }
		else { cout << "player2 :"; }
		cin >> input;
		if (c[input - 1] < 58) {
			if (counter % 2 == 0) {
				replace(input, 'X'); winner = checkWinner('X');
			}
			else {
				replace(input, 'O'); winner = checkWinner('O');
			}
			counter++;
			drow();
			if (winner == 'O') {
				cout << "Player2 win" << endl; continueGame = 0;
			}
			else if (winner == 'X') {
				cout << "Player1 win" << endl; continueGame = 0;
			}
		}
		else { cout << "the number is used" << endl; }
		if (counter==9 && winner=='w') { cout << "No one win" << endl; continueGame = 0; }
	}
}