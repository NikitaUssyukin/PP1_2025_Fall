// Math functions - pow, round, ceil, floor

#include <iostream>
#include <cmath> // contains the math functions

using namespace std;

int main() {

    int a;

    cin >> a;

    // pow(base, exponent)
    cout << "Square of a: " << pow(a, 2) << endl;
    cout << "Cube of a: " << pow(a, 3) << endl;
    cout << "a to the power of 5: " << pow(a, 5) << endl;

    return 0;
}