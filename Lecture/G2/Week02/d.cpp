// Logical comparison operators - less than, less than or equal, greater than... etc
// (<, <=, >, >=, ==, !=)
// they work with all fundamental data types and also work with string
// and give us a boolean value in return

#include <iostream>

using namespace std;

int main() {

    string a, b;
    cin >> a >> b;

    cout << "a < b: " << (a < b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;

    return 0;
}