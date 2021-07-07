/*write a code to output : -
#
##
### 
####
#####
*/
#include <iostream>
void main() {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < (i + 1); j++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}
}