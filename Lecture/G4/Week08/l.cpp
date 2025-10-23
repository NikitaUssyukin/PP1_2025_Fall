/*
converting from string to int
*/

#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    string s1 = to_string(a);
    string s2 = to_string(b);

    cout << a + b << endl;
    cout << s1 + s2 << endl;

    return 0;
}