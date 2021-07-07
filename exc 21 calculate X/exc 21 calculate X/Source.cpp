/*write a program used nested loop to calculate "X", where:-
X = 1!+ 3!+ 5!+ 7!
*/
#include<iostream>
void main() {
	int sum = 0;
	int mul = 1;
	for (int i = 1; i < 8; i += 2) {
		for (int j = 1; j < (i+1); j++) {
			mul *= j;
		}
		sum += mul;
		std::cout <<"!"<<i<<"="<< mul << std::endl;
		mul = 1;
	}
	std::cout << "X = 1!+ 3!+ 5!+ 7! =" << sum;
}