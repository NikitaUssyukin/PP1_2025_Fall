/*
checking the string if it is a palindrome
using a function
*/

#include <iostream>

using namespace std;

bool is_palindrome(string s) {
    bool result = true;

    // abba 
    // s[0] s[3] --- a a
    // s[1] s[2] --- b b
    for(int i = 0; i < s.size() / 2; ++i) {
        if(s[i] != s[s.size() - 1 - i]) {
            result = false;
            break;
        }
    }

    return result;
}

int main() {
    
    string s;
    cin >> s;

    if(is_palindrome(s)) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }

    return 0;
}