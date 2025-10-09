/*
Example of using a nested for loop
Nested loop is essentially a loop inside another loop
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    int m;

    cin >> n >> m;

    int a[n][m];

    // input
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < m; ++j) { // inner loop
            cin >> a[i][j];
        }
    }

    // output
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < m; ++j) { // inner loop
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}