/*write a program to output : -
 ###
# ##
## #
###
*/
#include <iostream>
void main() {
	int lines = 10;
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < lines; j++) {
			if   (j == i) { std::cout << " "; }
			else          { std::cout << "#"; }
		}
		std::cout << std::endl;
	}
}