/*
input with getline (allows to input strings with spaces)
*/

#include <iostream>

using namespace std;

int main() {

    string s;

    getline(cin, s);

    cout << s << endl;

    return 0;
}