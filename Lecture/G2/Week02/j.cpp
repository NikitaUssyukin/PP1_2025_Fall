// Conditional statements - if, else, else if

#include <iostream>

using namespace std;

int main() {

    int a;
    int b;
    cin >> a >> b;
    /*
    // this also works:
    cin >> a;
    cin >> b;
    */
    if(a > b) {
        cout << a << " is greater than " << b << endl;
    }
    else if(a < b) {
        cout << a << " is less than " << b << endl;
    }
    else {
        cout << a << " is equal to " << b << endl;
    }

    return 0;
}