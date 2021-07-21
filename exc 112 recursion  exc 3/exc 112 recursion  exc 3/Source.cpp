#include <iostream>
#include <algorithm>
using namespace std;

// Recursive function to reverse a given string
// Note string is passed as a reference parameter
void reverse(string& str, int k)
{
    static int i = 0;

    // if the end of the string is reached
    if (k == str.length()) {
        return;
    }

    reverse(str, k + 1);

    if (i <= k) {
        swap(str[i++], str[k]);
    }
}

int main()
{
    string str = "Monther saleh";

    reverse(str, 0);
    cout << "Reverse of the given string is " << str;

    return 0;
}