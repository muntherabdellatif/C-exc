/*write a program to output using NESTED loop : -
54321
5432
543
54
5
*/
#include<iostream>
void main() {
	int num;
	std::cout << "input started number";
	std::cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < (num - i); j++) {
			std::cout << (num - j);
		}
		std::cout << std::endl;
	}
}