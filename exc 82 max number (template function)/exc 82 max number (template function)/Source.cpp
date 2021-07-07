#include <iostream>
using namespace std;
template <class A>
A MAX(A a,A b);
int main() {
	int x , y;
	cout << "enter int number X : ";
	cin >> x;
	cout << "enter int number Y : ";
	cin >> y;
	cout << "the maximum number is " << MAX(x, y)<<endl;
	float z, w;
	cout << "enter float number X : ";
	cin >> z;
	cout << "enter float number Y : ";
	cin >> w;
	cout << "the maximum number is " << MAX(z, w)<<endl;
	char a, b;
	cout << "enter char X : ";
	cin >> a;
	cout << "enter char Y : ";
	cin >> b;
	cout << "the maximum char is " << MAX(a, b)<<endl;
}
template <class A>
A MAX(A a,A b){
	return (a > b ? a : b);
}