/*
1  1  1  2  1  3 
2  1  2  2  2  3
3  1  3  2  3  3
4  1  4  2  4  3
5  1  5  2  5  3
*/
#include<iostream>
using namespace std;
int main() {
	int counter = 1;
	for (int i = 0; i < 5; i++) {
		int counter2 = 1;
	    for (int g = 0; g < 3; g++){
		cout << counter << "\t" << counter2 << "\t";
	    counter2++;
		}
	    cout << endl;
		counter++;
	}
}