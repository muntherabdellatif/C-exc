/*
a number that is divisible only by itself and 1 
*/
#include<iostream>
using namespace std;
int main() {
	int prime[200] = { 0 }, counter1=0 , counter2 = 0;
	for (int i=2; i < 1000; i++) {
		counter1 = 0;
		for (int j = 2; j < i; j++) {
			if ((i % j) == 0) {
				counter1++; 
			}
		}
		if (counter1 == 0) { prime[counter2] = i; counter2++; }
	}
	cout << "the prime number from 1 to 1000 :" << endl;
	for (int i = 0; i < counter2; i++) {
		cout << prime[i] << "\t";
		if ((i % 10) == 0 && i!=0) { cout << endl; }
	}
}