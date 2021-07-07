//write a program to know positive, negative, odd and even numbers
#include<iostream>
void main() {
	int x;
	std::cout << "input number :";
	std::cin >> x ;
	if (x > 0) { std::cout << "the number is positive"; }
	else       { std::cout << "the number is positive"; }
	if ((x%2) != 0 ) { std::cout << " and odd number"; }
	else             { std::cout << " and even number"; }
}