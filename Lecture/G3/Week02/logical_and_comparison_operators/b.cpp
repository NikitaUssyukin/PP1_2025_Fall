// Logical operators - AND, OR, NOT (&&, ||, !)
// they work with boolean values
// and give a boolean in return

#include <iostream>

using namespace std;

int main() {

    bool a, b;
    cin >> a >> b;

    cout << a << ' ' << b << endl;

    cout << "AND: " << (a && b) << endl;
    cout << "OR: " << (a || b) << endl;
    cout << "NOT: " << (!a) << endl;

    return 0;
}