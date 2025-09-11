// Program that takes a number and outputs how many digits the number has

#include <iostream>

using namespace std;

int main() {

    int a;

    cin >> a; // a is [0; 9999]

    if(a >= 1000) { // [1000;9999] - "widest" condition
        cout << "four digits\n";
    }
    else if(a >= 100) { // [100;9999] - "narrower" condition
        cout << "three digits\n";
    }
    else if(a >= 10) { 
        cout << "two digits\n";
    }
    else {
        cout << "one digit\n";
    }

    return 0;
}