/*
Numeric systems

Decimal, base 10, 10 digits, from 0 to 9
Binary, base 2, 2 digits (bits), 0 and 1
Octal, base 8, 8 digits, from 0 to 7
Hexadecimal, base 16, 16 digits, from 0 to 9 and from A to F

dec: 716 -> 7 * 10^2 + 1 * 10^1 + 6 * 10^0 = 700 + 10 + 6

hex: 716 -> 7 * 16^2 + 1 * 16^1 + 6 * 16^0 = 7 * 256 + 16 + 6 = 1814

Converting from decimal to binary
dec: 25
bin: 11001 (1 * 2^4 + 1 * 2^3 + 0 * 2^2 + 0 * 2^1 + 1 * 2^0 = 16 + 8 + 1)
25 / 2 = 12 (remainder: 1)
12 / 2 = 6 (remainder: 0)
6 / 2 = 3 (remainder: 0)
3 / 2 = 1 (remainder: 1)
1 / 2 = 0 (remainder: 1)
*/

#include <iostream>

using namespace std;

int main() {

    // dec to bin

    int n; 
    cin >> n;

    string res = ""; // string stores a sequence of characters (char)

    while(n > 0) {
        int rem = n % 2;
        // cout << char(rem + '0') << endl;
        // cout << rem + '0' << endl;
        res = char(rem + '0') + res;
        n /= 2; // same as n = n / 2
    }
    cout << res << endl;

    return 0;
}