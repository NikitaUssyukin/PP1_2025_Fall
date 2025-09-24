/*
Numeric systems

Decimal: base 10, has 10 digits, from 0 to 9
Binary: base 2, has 2 digits (bits), 1 and 0
Octal: base 8, has 8 digits, from 0 to 7
Hexadecimal: base 16, has 16 digits, from 0 to 9 and from A to F

957 (decimal) -> 9 * 10^2 + 5 * 10^1 + 7 * 10^0 = 900 + 50 + 7 = 957 in decimal
957 (hexadecimal) -> 9 * 16^2 + 5 * 16^1 + 7 * 16^0 = 2304 + 80 + 7 = 2391 in decimal 

Converting from decimal to any other numeric system

from dec to bin:
87 / 2 = 43 (remainder: 1)
43 / 2 = 21 (remainder: 1)
21 / 2 = 10 (remainder: 1)
10 / 2 = 5 (remainder: 0)
5 / 2 = 2 (remainder: 1)
2 / 2 = 1 (remainder: 0)
1 / 2 = 0 (remainder: 1)

87 -> 1010111
1010111 -> 1 * 2^6 + 0 * 2^5 + 1 * 2^4 + 0 * 2^3 + 1 * 2^2 + 1 * 2^1 + 1 * 2^0
64 + 0 + 16 + 0 + 4 + 2 + 1 = 87

from dec to any: 
- repeatedly divide n by the base of the numeric system you're converting into
- then read the remainders in reverse
*/

#include <iostream>

using namespace std;

int main() {
    
    // from dec to bin
    
    // char a = '0';
    
    // cout << int(a) << endl;

    string res = ""; // empty string

    int n;
    cin >> n;

    while(n > 0) {
        int remainder = n % 2;
        n /= 2; // same as n = n / 2;
        res += 48 + remainder;
    }

    // cout << res[0] << endl; // output the first char from res 
    // cout << res[1] << endl; // output the second char from res
    // cout << res[res.length() - 1] << endl; // output the last char from res

    // outputting forwards
    // for(int i = 0; i < res.length(); ++i) {
    //     cout << res[i];
    // }

    // outputting backwards (in reverse)
    for(int i = res.length() - 1; i >= 0; --i) {
        cout << res[i];
    }

    cout << endl;

    return 0;
}