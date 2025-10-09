/*
Outputting all indexes in an n by m 2D array
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    int m;

    cin >> n >> m;

    // output
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < m; ++j) { // inner loop
            cout << "[" << i << "][" << j << "] ";
        }
        cout << endl;
    }

    return 0;
}