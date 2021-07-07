/*write a program to compute the sum of even numbers from some
numbers until "0" by using DO/WHILE loop:-*/
#include<iostream>
void main() {
	int x, summ ,y ;
	std::cout << "inter number :";
	std::cin >> x;
	y = x; summ = 0;
	while (x > 0) {
		if ((x % 2) == 0) {
			summ += x;
		}
		x--;
	}
	std::cout << "the sum of even numbers from" << y << " until 0 = " << summ ;
}