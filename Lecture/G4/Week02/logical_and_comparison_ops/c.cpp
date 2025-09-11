// Logical comparison operators
// <, <=, >, >=, ==, !=
// These work with fundamental data types and string
// and as a result they give us also a boolean value

#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    cout << "a < b: " << (a < b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;

    return 0;
}