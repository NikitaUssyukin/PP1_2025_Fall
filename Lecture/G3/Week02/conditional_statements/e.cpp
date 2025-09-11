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
    else {
        // if all previous conditions were false
        // the code inside the else block runs
        cout << a << " is not less than " << b << "\n";
    }

    return 0;
}