// Math functions - pow, round, ceil, floor

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a;

    cin >> a;

    // each of these functions takes either a float or double
    cout << ceil(a) << endl;  // ceil - always rounds up
    cout << floor(a) << endl; // floor - always rounds down
    cout << round(a) << endl; // round - rounds up based on the decimal part
                              // 0.0 < a < 0.5 - down
                              // 0.5 <= a < 1.0 - up

    return 0;
}