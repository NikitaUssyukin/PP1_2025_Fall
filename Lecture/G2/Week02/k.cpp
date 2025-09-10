// Conditional statements - if, else, else if

#include <iostream>

using namespace std;

int main() {

    int a;
    
    cin >> a; // a is [0; 9999]
    
    if(a < 10) {
        cout << "one digit\n";
    }
    else if(a < 100) {
        cout << "two digits\n";
    }
    else if(a < 1000) {
        cout << "three digits\n";
    }
    else {
        cout << "four digits\n";
    }

    return 0;
}