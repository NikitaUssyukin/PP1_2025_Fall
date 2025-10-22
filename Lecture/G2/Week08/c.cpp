/*
string output
*/

#include <iostream>

using namespace std;

int main() {

    string s = "sweet";

    cout << s << endl;

    for(int i = 0; i < s.size(); ++i) {
        cout << s[i];
    }
    cout << endl;

    for(char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}