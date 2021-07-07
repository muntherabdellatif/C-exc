#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void main() {
	while (1) {
		srand(time(0));
		cin.get();
		cout <<"dice 1 :"<< rand() % 8 << " ; " <<"dice 2 :"<< rand() % 8;
	}
}