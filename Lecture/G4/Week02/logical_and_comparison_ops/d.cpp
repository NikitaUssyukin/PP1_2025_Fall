// Logical comparison operators
// <, <=, >, >=, ==, !=
// These work with fundamental data types and string
// and as a result they give us also a boolean value

#include <iostream>

using namespace std;

int main() {

    char a, b;

    cin >> a >> b;

    // type casting char into int
    // to check the ASCII code
    cout << int(a) << ' ' << int(b) << endl;

    // comparison below utilizes ASCII code of the symbol
    cout << "a < b: " << (a < b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;

    return 0;
}