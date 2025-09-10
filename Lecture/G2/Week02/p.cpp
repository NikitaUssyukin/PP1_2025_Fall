// ASCII code

#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    cout << a << ' ' << b << endl;
    cout << char(a) << ' ' << char(b) << endl;

    cout << a + b << endl;
    cout << char(a + b) << endl;

    return 0;
}