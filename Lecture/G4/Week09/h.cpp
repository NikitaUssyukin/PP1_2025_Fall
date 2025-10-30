/*
setprecision() from <iomanip> and printf()
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double a = 1.23456789;
    double b = 0.000000123456789;

    cout << a << endl;
    cout << b << endl;
    cout << setprecision(3) << a << endl;
    cout << b << " " << endl;

    printf("%.3f", a); // does not need <iomanip>
    cout << endl;
    printf("%.3f", b);

    return 0;
}