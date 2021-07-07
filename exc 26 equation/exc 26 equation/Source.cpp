/*write a program to compute "Z", where
Z = (x/1!)+ (x^2/2!)+ (x^3/3!)...
*/
#include<iostream>
void main() {
	float m = 1, x,y, n, sum = 0;
	std::cout << " enter number of terms for equation (Z = (x/1!)+ (x^2/2!)+ (x^3/3!)...)";
	std::cout << std::endl;
	std::cout << " n : ";
	std::cin >> n;
	std::cout << "enter the value of x :";
	std::cin >> x;
	y = x;
	std::cout << "Z=";
	for (int i = 0; i < n; i++) {
		m = 1; x = y;
		for (int j = 1; j < i+2; j++) {
			x *= x;
			m = m*(j);
         }
		sum += x/m ;
		std::cout << x/m << "+";
	}
	std::cout << std::endl;
	std::cout << "Z=" << sum;
}