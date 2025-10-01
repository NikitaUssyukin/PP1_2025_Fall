/*
Class string - an array of char
*/

#include <iostream>

using namespace std;

int main() {

    string greeting = "hello"; // class string

    int n = greeting.length();
    for(int i = 0; i < n; ++i) {
        cout << greeting[i] << ' ';
    }
    cout << endl;

    return 0;
}