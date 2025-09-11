// Control flow - conditionals, loops are a part of it
// It is the specific order in which program executes its statements (lines of code)

// Conditionals - if, else, else if

#include <iostream>

using namespace std;

int main() {

    int a;

    cin >> a;

    if(a < 7) {
        cout << "a is less than 7\n";
    }
    else if(a > 7) {
        cout << "a is greater than 7\n";
    }
    else {
        cout << "a is equal to 7\n";
    }


    return 0;
}