#include<iostream>
std::string nameString(std::string );
int main() {
	std::cout << nameString("monther ");
}

std::string nameString(std::string name) {
	std::string b = "Edabit";
	std::string result = name + b;
	return result;
}