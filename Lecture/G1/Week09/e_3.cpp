/*
Checking if a string is a palindrome using functions
this time using a function with return type void
*/

#include <iostream>

using namespace std;

void is_palindrome(string str) {
    for(int i = 0; i < str.size() / 2; ++i) {
        if(str[i] != str[str.size() - 1 - i]) {
            cout << "No\n";
            return;
        } 
    }

    cout << "Yes\n";
    return;
}


int main() {
    
    string s;
    cin >> s;

    is_palindrome(s);

    return 0;
}