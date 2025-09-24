#include <iostream>

using namespace std;

int main() {

    int a = 3; // in binary: 0011
    int b = 5; // 0101

    // bitwise operations
    cout << (a & b) << endl; // 0001 (bin) or 1 (dec)
    /*
    0011
    &    = 0001 
    0101
    */
    cout << (a | b) << endl; // 0111 (bin) or 7 (dec)
    cout << (a ^ b) << endl; // 0110 (bin) or 6 (dec)

    return 0;
}