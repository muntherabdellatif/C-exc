#include<iostream>
using namespace std;
class number {
public:
	int x;
	number(int X) {
		x = X; 
	}
};
int operator^(number x, number y);
ostream& operator<<(ostream &COUT, number &n);
int main() {
	number n1 (2);
	number n2 (5);
	cout << (n1 ^ n2) <<endl ;
	cout << n1 << n2 ;

}
int operator^(number X, number Y) {
	int m = 1;
	for (int i = 0; i < Y.x ; i++) {
		m *= X.x;
	}
	return m;
}
ostream& operator<<(ostream &COUT, number &n) {
	COUT << "this is operator test "<<endl;
	COUT << "the number is " <<n.x<< endl;
	return COUT;
}