/*
converting from string to int
*/

#include <iostream>

using namespace std;

int main() {

    string s1, s2;

    cin >> s1 >> s2;

    int a = stoi(s1);
    int b = stoi(s2);

    cout << s1 + s2 << endl;
    cout << a + b << endl;

    return 0;
}