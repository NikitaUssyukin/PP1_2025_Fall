#include <iostream>

using namespace std;

int main() {
    
    // from bin to dec
    
    // char a = '0';
    
    // cout << int(a) << endl;

    string bin;
    
    cin >> bin;
    
    int res = 0; // decimal value of bin

    int power = 1; // value of 2 to the power of 0

    // going over the string in reverse
    for(int i = bin.length() - 1; i >= 0; --i) {
        bin[i]; // 1 or 0 (char)
        res += (bin[i] - '0') * power;
        power *= 2; 
    }
    cout << res << endl;

    return 0;
}