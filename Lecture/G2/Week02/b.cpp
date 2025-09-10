// Logical operators - AND, OR, NOT (&&, ||, !)

#include <iostream>

using namespace std;

int main() {

    bool a, b;
    cin >> a >> b;

    cout << a << ' ' << b << endl;

    cout << "a AND b: " << (a && b) << endl;
    cout << "a OR b: " << (a || b) << endl;
    cout << "NOT a: " << (!a) << endl;

    return 0;
}