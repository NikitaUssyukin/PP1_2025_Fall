// program that takes integer n and prints its number of digits

#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n; // n is [0; 9999]

    if(n < 10) { // [0; 10)
        cout << "one digit\n";
    }
    else if(n < 100) { // [0; 100)
        cout << "two digits\n";
    }
    else if(n < 1000) { // [0; 1000)
        cout << "three digits\n";
    }
    else {
        cout << "four digits\n";
    }


    return 0;
}