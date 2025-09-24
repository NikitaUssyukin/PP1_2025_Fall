// from dec to any

#include <iostream>
#include <algorithm> // needed for reverse()

using namespace std;

int main() {
    
    int n, base; // the base we are converting into
    cin >> n >> base;

    string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    string res = "";

    while(n > 0) {
        int rem = n % base;
        n /= base;
        res += digits[rem];
    }

    // for(int i = res.length() - 1; i >= 0; --i) {
        //     cout << res[i];
    // }
    // cout << endl;
        
    reverse(res.begin(), res.end());

    cout << res << endl;

    return 0;
}