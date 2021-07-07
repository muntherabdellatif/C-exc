#include"number.h"
int main() {
	number <int,int>num(4 , 5);
	cout << num.sum();
}
template <class a, class b>
number<a, b>::number(a A, b B) {
	x = A; y = B;
}
template <class a, class b>
float number<a, b>::sum() {
	return (x + y);
}