/*
Array of char (C-style string) and class string
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    char greeting[] = "hello"; // c-style string

    string greeting_str = "hello"; // class string

    int n = sizeof(greeting) / sizeof(greeting[0]);

    for(int i = 0; i < n; ++i) {
        cout << greeting[i];
    }
    cout << endl;

    for(int i = 0; i < greeting_str.length(); ++i) {
        cout << greeting_str[i];
    }
    cout << endl;

    return 0;
}