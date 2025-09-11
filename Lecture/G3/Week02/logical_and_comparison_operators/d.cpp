// Logical comparison operators - less than, less than or equal, ..., etc.
// <, <=, >, >=, ==, !=
// they work with all fundamental types and string
// and give us a boolean in return

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