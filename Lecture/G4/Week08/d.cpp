/*
changing the elements of the string
*/

#include <iostream>

using namespace std;

int main() {

    string s = "abcde";

    for(int i = 0; i < s.size(); ++i) {
        s[i] += 1;
    }
    cout << s << endl;

    for(char c : s) {
        c += 1;
    }
    cout << s << endl;

    for(char &c : s) {
        c += 1;
    }
    cout << s << endl;

    return 0;
}