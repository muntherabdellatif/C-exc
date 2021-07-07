/*write a program to output : -
   #
  ###
 #####
#######
*/
#include<iostream>
void main() {
	int lines = 20;
	for (int i = 0; i < lines; i++) {
		for (int j = i; j < lines; j++) {
			std::cout << " ";
		}
		for (int k = 0; k < (1+2*(i)) ; k++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}
}