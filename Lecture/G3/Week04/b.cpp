#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // bin to dec

    string bin;
    cin >> bin;

    int res = 0;

    int power = pow(2, bin.length() - 1);
    // cout << power << endl;

    for(int i = 0; i < bin.length(); ++i) {
        // cout << int(bin[i] - '0') << endl;
        res += int(bin[i] - '0') * power;
        power /= 2;
        // cout << power << endl;
    }

    cout << res << endl;

    return 0;
}