/*write a program to output : -
####
 ###
  ##
   #
*/
#include <iostream>
void main() {
	int lines = 20;
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < i; j++) {
			std::cout << " ";
		}
		for (int k = i; k < lines; k++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}
}