// Control flow - conditionals, loops are a part of it
// It is the specific order in which program executes its statements (lines of code)

// Conditionals - if, else, else if

#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    if(a < b) {
        cout << a << " is less than " << b << "\n";
    }
    else if(a == b) {
        cout << a << " is equal to " << b << "\n";
    }
    else {
        cout << a << " is greater than " << b << "\n";
    }

    return 0;
}