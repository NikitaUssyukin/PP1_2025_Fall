/*
accessing elements using for loops
*/

#include <iostream>

using namespace std;

int main() {

    string s = "cat";

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == 'c') s[i] = 'r';
    }
    cout << s << endl;

    return 0;
}