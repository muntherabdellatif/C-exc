/*
Write a program to output :
    A
   BCD
  EFGHI
 jKLMNOP
QRXTYVWXY
*/
#include<iostream>
void main() {
	int lines = 5;
	char later = 'A';
	for (int i = 0; i < lines; i++) {
		for (int j = i; j < lines; j++) {
			std::cout << " ";
		}
		for (int k = 0; k < (1 + 2 * (i)); k++) {
			std::cout << later; later++;
		}
		std::cout << std::endl;
	}
}