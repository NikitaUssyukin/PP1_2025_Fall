/*
bin to dec
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    string bin;
    cin >> bin;

    int dec = 0;

    int power = pow(2, bin.length() - 1);

    for(int i = 0; i < bin.length(); ++i) {
        // cout << bin[i] << ' ' << int(bin[i]) << ' ' << (bin[i] - '0') << endl;
        dec += (bin[i] - '0') * power;
        power /= 2;
    }
    
    cout << dec << endl;

    return 0;
}