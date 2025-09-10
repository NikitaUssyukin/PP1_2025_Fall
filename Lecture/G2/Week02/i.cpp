// Conditional statements - if, else, else if

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    if(a > 3) {
        cout << "a is greater than 3" << endl;
    }
    else if(a < 3) {
        cout << "a is less than 3" << endl;
    }
    else {
        cout << "a is equal to 3" << endl;
    }

    return 0;
}