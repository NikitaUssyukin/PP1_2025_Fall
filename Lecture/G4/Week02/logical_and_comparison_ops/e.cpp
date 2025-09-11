// Logical comparison operators
// <, <=, >, >=, ==, !=
// These work with fundamental data types and string
// and as a result they give us also a boolean value

#include <iostream>

using namespace std;

int main() {

    string a, b;

    cin >> a >> b;

    // comparison below utilizes ASCII code of the symbol
    cout << "a < b: " << (a < b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;

    return 0;
}