//write a FOR loop to print the following integers : 1 2 3 5 8 13 21 34 55
#include <iostream>
void main() {
	int A = 1;
	int B = 1;
	int C = 0;
	for (int i = 0; i < 9; i++) {
		C = B;
		std::cout << B << " ";
		B += A;
		A = C;
	}
}