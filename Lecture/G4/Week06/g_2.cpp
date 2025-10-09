/*
Outputting elements of the main diag 
and then the secondary diag
in a square n by n 2D array
*/

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int a[n][n];

    // input
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < n; ++j) { // inner loop
            cin >> a[i][j];
        }
    }

    cout << "main diag: ";
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i == j) cout << a[i][j] << " ";
        }
    }
    cout << endl;

    cout << "secondary diag: ";
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i + j == n - 1) cout << a[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}