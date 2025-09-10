// Conditional statements - if, else, else if

#include <iostream>

using namespace std;

int main() {

    int a;
    
    cin >> a; // a is [0; 9999]
    
    if((a < 1000 && a > 99) && (a % 2 == 0)) {
        cout << "three digits and it is even\n";
    }
    else {
        cout << "not three digits or not even\n";
    }

    return 0;
}