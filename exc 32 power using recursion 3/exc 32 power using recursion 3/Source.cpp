#include<iostream>
using namespace std;
int calculate(int, int);
void main() {
	int x, n;
	cout << "this program is to calculate Y=x^n;" << endl << "enter x :";
	cin >> x;
	cout << "enter n :";
	cin >> n;
	cout << "Y = " << x << "^" << n << " = " << calculate(x, n);
}
int calculate(int x, int n) {
	if (n == 0) { return 1; }
	return x*calculate(x, --n);
}