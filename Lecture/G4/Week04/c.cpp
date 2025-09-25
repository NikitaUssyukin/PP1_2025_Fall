/*
dec to any
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n, base;
    cin >> n >> base;

    string res = "";

    string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while(n > 0) {
        int rem = n % base;
        n /= base;
        res = digits[rem] + res;
    }

    cout << res << endl;

    return 0;
}