/*
      1
   3  8  5
7  9  40 11 13 
*/
#include<iostream>
using namespace std;
int main() {
    int k = 3;
    int array[3][5] = { 0 };
    array[0][2] = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            if (j != 2) { array[i][j] = k; k += 2; }
        }
        for (int j = 0; j < 5; j++) { 
            if (j != 2) { array[i][2] += array[i][j]; }
        }
        for (int j = 0; j < 5; j++) {
            if (array[i][j]==0){ cout << " " << "\t"; }
            else { cout << array[i][j] << "\t"; }
        }
        cout << endl;
    }
}