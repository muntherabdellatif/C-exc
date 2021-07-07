//write a program to count the sum of an array:-
#include<iostream>
void main() {
	int x[5];
	int aSum=0;
	std::cout << " input array of 5 numbers : x [" << std::endl ;
	for (int i = 0; i < 5; i++) {
		std::cin >> x[i];
		aSum += x[i];
	}
	std::cout << "]"<< std::endl;
	std::cout << "the summation is :" << aSum;
}