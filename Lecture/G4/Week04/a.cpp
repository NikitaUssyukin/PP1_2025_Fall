/*
Numeric systems

Decimal: base 10, 10 digits, from 0 to 9
Binary: base 2, 2 digits (bits), 0 and 1
Octal: base 8, 8 digits, from 0 to 7
Hexadecimal: base 16, 16 digits, from 0 to 9 and from A to F

dec: 123 -> 1 * 10^2 + 2 * 10^1 + 3 * 10^0 = 100 + 20 + 3
hex: 123 -> 1 * 16^2 + 2 * 16^1 + 3 * 16^0 = 256 + 32 + 3 = 291 (in dec)

Converting from dec to bin
dec: 23
bin: 10111
23 / 2 = 11 (remainder: 1)
11 / 2 = 5 (remainder: 1)
5 / 2 = 2 (remainder: 1)
2 / 2 = 1 (remainder: 0)
1 / 2 = 0 (remainder: 1)

from dec to hex:
dec: 44
hex: 2C
44 / 16 = 2 (remainder: 12 - C)
2 / 16 = 0 (remainder: 2 - 2)
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