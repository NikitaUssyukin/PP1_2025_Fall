// Logical operators - AND, OR, NOT (&&, ||, !)
// they work with boolean values

#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    cout << a << ' ' << b << endl;
    // type casting (explicit)
    cout << bool(a) << ' ' << bool(b) << endl;

    // type casting (implicit) 
    cout << "AND: " << (a && b) << endl;
    cout << "OR: " << (a || b) << endl;
    cout << "NOT: " << (!a) << endl;

    return 0;
}