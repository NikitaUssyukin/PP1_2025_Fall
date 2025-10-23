/*
string input
*/

#include <iostream>

using namespace std;

int main() {

    string s1, s2;

    cin >> s1;

    getline(cin, s2);

    cout << s1.size() << endl;
    cout << s2.size() << endl;

    return 0;
}