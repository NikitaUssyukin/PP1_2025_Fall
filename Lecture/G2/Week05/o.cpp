/*
C-style string - an array of char
*/

#include <iostream>

using namespace std;

int main() {

    char greeting[] = "hello"; // c-style string

    int n = sizeof(greeting) / sizeof(greeting[0]); // size of the array greeting in bytes
    // divided by the size of the first element of greeting in bytes

    for(int i = 0; i < n; ++i) {
        cout << greeting[i] << ' ';
    }
    cout << endl;

    return 0;
}