/*
accessing elements using for loops
*/

#include <iostream>

using namespace std;

int main() {

    string s = "hello";

    for(int i = 0; i < s.size(); ++i) {
        cout << s[i];
    }
    cout << endl;

    for(char c : s) { // c is a read-only copy
        cout << c;
    }
    cout << endl;

    return 0;
}