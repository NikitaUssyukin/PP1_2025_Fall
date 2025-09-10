// Conditional statements - if, else, else if

#include <iostream>

using namespace std;

int main() {

    int a;
    
    cin >> a; // a is [0; 9999]
    
    if(a < 1000 && a > 99) {
        cout << "three digits\n";
    }
    else {
        cout << "not three digits\n";
    }

    return 0;
}