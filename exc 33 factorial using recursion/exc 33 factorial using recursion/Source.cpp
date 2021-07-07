#include<iostream>
using namespace std;
int calculate(int);
void main() {
	int n ;
	cout << "this program is to calculate n! ;" << endl << "enter n :";
	cin >> n;
	cout << n << "! = " << calculate(n);
}
int calculate(int n) {
	if (n == 0) { return 1 ; }
	return n*calculate(n-1);
}