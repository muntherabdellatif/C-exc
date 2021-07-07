#include<iostream>
using namespace std;
int XOgame(int, int);
int checkWin(int [5],int [5]);
void main() {
	int player1[5] = {0,10,100,1000,10000}; // player 1 steps
	int player2[5] = {0,10,100,1000,10000}; // player 2 steps
	int x,y; // players step , winner
	bool n = 0; // players turn
	bool l = 0; // last players turn
	XOgame(10, 0);
	for (int i = 0; i < 9; ) {
		if (n == 0) { cout << "player1:"; }
		else { cout << "player2:"; }
		cin >> x;
		if (n == 0) { player1[(i + 2) / 2 - 1] = x; }
		else { player2[(i + 1) / 2 - 1] = x; }
		l = n;
		n = XOgame(x, n);
		if (l != n) { i++; }
		if (i > 4) {
			y = checkWin(player1, player2);
			if (y != 0) {
				cout << "the winner is :" << y;
				i = 9;
			}
		}
	}
}
int XOgame(int x, int n) {
	static char z[10] = { '1','2','3','4','5','6','7','8','9',' '};
	if (z[x-1] != 'X' && z[x-1] != 'O') {
		if (n == 0) { z[x - 1] = 'X'; }
		else if (n == 1) { z[x - 1] = 'O'; }
	}
	else { cout << "this number is used try again" << endl; return n; }
	cout << "| " << z[0] << " | " << z[1] << " | " << z[2] << " | " << endl;
	cout << "-------------" << endl;
	cout << "| " << z[3] << " | " << z[4] << " | " << z[5] << " | " << endl;
	cout << "-------------" << endl;
	cout << "| " << z[6] << " | " << z[7] << " | " << z[8] << " | " << endl;
	cout << "-------------" << endl;
	return !n ;
}
int checkWin(int player1[], int player2[]) {
	int w[6] = {
	abs(player1[0] - player1[1]),
	abs(player1[1] - player1[2]),
	abs(player1[2] - player1[3]),
	abs(player1[0] - player1[3]),
	abs(player1[1] - player1[3]),
	abs(player1[0] - player1[2]), };
	for (int i = 0; i < 6; i++) {
		for (int j = 0; i < 6; j++) {
			if (w[i] == w[j] && w[i]!=0 && w[j]!=0) { return 1; }
		}
    }
	int z[6] = {
    abs(player2[0] - player2[1]),
    abs(player2[1] - player2[2]),
    abs(player2[2] - player2[3]),
    abs(player2[0] - player2[3]),
    abs(player2[1] - player2[3]),
    abs(player2[0] - player2[2]), };
    for (int i = 0; i < 6; i++) {
		for (int j = 0; i < 6; j++) {
			if (z[i] == z[j] && z[i] != 0 && z[j] != 0) { return 2; }
		}
	}
	return 0;
}