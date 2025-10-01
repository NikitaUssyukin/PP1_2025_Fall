/*
Converting from decimal to binary
*/

#include <iostream>

using namespace std;

int main() {

    int dec;
    cin >> dec;

    string res = ""; // string is a sequence of characters (char)

    // cout << int('0') << endl; // checking ascii code

    while(dec > 0) {
        int rem = dec % 2;
        dec /= 2; // same as dec = dec / 2
        res = char(rem + '0') + res;
    }
    cout << res << endl;

    return 0;
}