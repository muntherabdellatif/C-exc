#include<iostream>
using namespace std;
void main(){
	int input=0;
	int array[1000] = { 0 };
	int i = 0;
	cout << " input studants degrees , and -1 to stop " << endl;
	for (; input != -1; i++) {
		cin >> input;
		array[i] = input;
	}
	cout << "the degrees is :"<<endl<<" { "<< array[0] ;
	for (int j = 0; j < (i-2); j++) {
		cout << " , " << array[j + 1];
		if (((j + 1) % 10) == 0) { cout << endl; }
	}
	cout << "}" << endl;
	
	int sum = 0;
	for (int j = 0; j < (i-1); j++) {
		sum += array[j];
	}
	cout <<"the sum is :"<< sum <<"the average is :"<< (float)(sum /(i-1));
}