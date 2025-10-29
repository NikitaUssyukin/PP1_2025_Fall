/*
Checking if a string is a palindrome using functions
*/

#include <iostream>

using namespace std;

bool is_palindrome(string str) {
    bool result = true;

    for(int i = 0; i < str.size() / 2; ++i) {
        if(str[i] != str[str.size() - 1 - i]) {
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