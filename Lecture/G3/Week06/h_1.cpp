/*
Outputting the main diagonal and the secondary diagonal of the square matrix (n by n)
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n; // amount of rows and columns

    cin >> n;

    int a[n][n]; // 2D array with n rows and m columns

    // input
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < n; ++j) { // inner loop
            cin >> a[i][j];
        }
    }

    cout << "Main diagonal: ";
    for(int i = 0; i < n; ++i) {
        cout << a[i][i] << " ";
    }
    cout << endl;

    cout << "Secondary diagonal: ";
    for(int i = 0; i < n; ++i) {
        cout << a[i][n - 1 - i] << " ";
    }
    cout << endl;

    return 0;
}