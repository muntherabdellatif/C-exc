//write a program to output the following result 
//(1 , 2 , 3 , 4 , 2 , 4 , 6 , 8 , 3 , 6 , 9 , 1 2) by using for loop...
#include<iostream>
void main() {
	for (int i = 0; i < 3; i++) {
		std::cout << "{";
		for (int j = 0; j < 4; j++) {
			std::cout << ((i + 1) + (i + 1) * j);
			if (j != 3) { std::cout << " , "; }
		}
		std::cout << "}" << std::endl;
	}
	std::cout<<std::endl;
	std::cin.get();
}