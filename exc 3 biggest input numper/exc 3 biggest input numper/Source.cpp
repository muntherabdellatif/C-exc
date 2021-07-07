// write a program to input 3 integers and determine which of them is biggest : -
# include<iostream>

void main() {
	int x[3];
	int max = x[0];
	for (int i = 0; i < 3; i++) {
		std::cout << "input number :";
		std::cin >> x[i];
		if (max < x[i]) { max = x[i]; }
	}
	std::cout << " the beggst number is :"; 
	std::cout << max;
}
