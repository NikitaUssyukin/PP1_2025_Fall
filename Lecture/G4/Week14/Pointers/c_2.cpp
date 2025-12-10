/*
Pointers
*/

#include <iostream>

using namespace std;

int main() {

    int a = 4;
    int& ref = a;

    ref = 5;
    cout << "a: " << a << endl;
    cout << "-------\n";

    int b = 9;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    ref = b;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    ref = 8;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}