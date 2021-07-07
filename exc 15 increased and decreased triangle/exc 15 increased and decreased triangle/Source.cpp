/*write a program to output : -
#
##
###
####
###
##
#
*/
#include<iostream>
void main() {
	int lines = 20;
	lines = lines / 2;
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < (i + 1); j++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < (lines); i++) {
		for (int j = i; j < (lines - 1);j++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}
}