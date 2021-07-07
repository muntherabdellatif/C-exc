#include<iostream>
using namespace std;
int calculate(int, int);
void main() {
	int x, n;
	cout << "this program is to calculate Y=x^n;" << endl << "enter x :";
	cin >> x;
	cout << "enter n :";
	cin >> n;
	cout << "Y = " << x << "^" << n << " = " << calculate(x, n - 1);
}
int calculate(int x, int n) {
	static int y = 1;
	y *= x;
	if (n == 0) { return y ; }
	calculate(x, --n);
}