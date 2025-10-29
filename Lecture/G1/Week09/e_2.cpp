/*
Checking if a string is a palindrome using functions
this time we use return to stop the function and get the result
and we eliminated the result variable from the function
*/

#include <iostream>

using namespace std;

bool is_palindrome(string str) {
    for(int i = 0; i < str.size() / 2; ++i) {
        if(str[i] != str[str.size() - 1 - i]) {
            return false;
        } 
    }

    return true;
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