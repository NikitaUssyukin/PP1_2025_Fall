/*
Increment and decrement (post- and pre- variations)
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    
    cout << "n++ - postincrement:\n"; 
    n = 1;
    cout << n++ << endl;
    cout << n << endl;

    cout << "++n - preincrement:\n"; 
    n = 1;
    cout << ++n << endl;
    cout << n << endl;

    // with decrement it is the same, but it decreases by 1 instead of increasing

    return 0;
}