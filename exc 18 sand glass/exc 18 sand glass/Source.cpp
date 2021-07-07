/*write a program to output : -
#####
 ###
  #
  *
 ***
*****
*/
#include<iostream>
void main() {
	int lines = 10;

	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < i+1; j++) {
			std::cout << " ";
		}
		for (int k = (1 + 2 * (i)) ; k < (2 * (lines)); k++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < lines; i++) {
		for (int j = i; j < lines; j++) {
			std::cout << " ";
		}
		for (int k = 0; k < (1 + 2 * (i)); k++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}