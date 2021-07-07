//write a program to enter a letter and determine the letter is small or capital:-
# include <iostream>
void main() {
	char x ;
	std::cout << " input the later : ";
	std::cin >> x ;
	if      (x > 'A' && x < 'Z') { std::cout << "the later is capital "; }
	else if (x > 'a' && x < 'z') { std::cout << "the later is small "; }
	else { std::cout << "this is not number "; }
	std::cin.get();
}