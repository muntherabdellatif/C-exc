#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void main() {
	static int x, y;
	cout << " this program is to ginerate random number between x and y " << endl;
	while (1) {
		cout << "enter the value of x :";
		cin >> x;
		cout << "enter the value of y :";
		cin >> y;
		srand(time(0));
		cout << "the number is : " << (x + rand() % ( y - x + 1 ))<< endl;
	}
}
