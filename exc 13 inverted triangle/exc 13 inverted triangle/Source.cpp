/*write a program to output : -
####
###
##
#
*/
#include<iostream>
void main() {
	int lines = 20;
	for (int i = 0; i < lines; i++) {
		for (int j = i; j < lines; j++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}
}