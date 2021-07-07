#include <iostream>
using namespace std;
template <class A, class B>
B sum(A a, B b);
int main() {
	int x;
	float y;
	cout << "enter int number X = ";
	cin >> x;
	cout << "enter float number Y = ";
	cin >> y;
	cout <<"<int> X + <float> Y = " << sum(x, y);
}
template <class A, class B>
B sum(A a, B b) {
	return (a + b);
}