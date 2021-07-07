//write a program to find the maximum and minimum value from an array:-
#include<iostream>
void main() {
	int A[5];
	int maximum, minimum;
	for (int i = 0; i < 5; i++) {
		std::cout << "A=[" << i << "]=";
		std::cin >> A[i];
		if (i == 0) { maximum = A[i]; minimum = A[i]; }
		else {
			if (maximum<A[i])   { maximum = A[i]; }
			if (minimum > A[i]) { minimum = A[i]; }
		}
	}
	std::cout << " the maximum is " << maximum << std::endl;
	std::cout << " the mimimum is " << minimum << std::endl;
}