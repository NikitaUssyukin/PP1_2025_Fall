#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n]; // input array

    int b[1001] = {}; // when the size is fixed in code, '= {}' will fill the array with 0's
    for(int i = 0; i < n; ++i) { // filling a[] with values from input
        cin >> a[i];             // filling b[] based on values from a[]
        ++b[a[i]];
    }

    int max_cnt = 0; // max counter - maximal amount of repetitions for a number
    for(int i = 0; i < 1001; ++i) {
        if(b[i] > max_cnt) {
            max_cnt = b[i];
        }
    }

    for(int i = 1000; i >= 0; --i) {
        if(b[i] == max_cnt) cout << i << " ";
    }
    cout << endl;
    
    return 0;
}