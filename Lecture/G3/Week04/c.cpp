#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // dec to any

    int dec, base;
    cin >> dec >> base;

    string res = "";

    string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while(dec > 0) {
        int rem = dec % base;
        res = digits[rem] + res;
        dec /= base;
    }

    cout << res << endl;

    return 0;
}