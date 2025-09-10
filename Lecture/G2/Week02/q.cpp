// Math functions - pow, round, ceil, floor

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a;
    cin >> a;

    // pow(base, exponent)
    cout << pow(a, 2) << endl; // square of a
    cout << pow(a, 3) << endl; // cube of a
    cout << pow(a, 5) << endl; // a to the power of 5

    return 0;
}