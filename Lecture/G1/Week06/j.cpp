/*
Outputting the secondary diagonal of a 2D-array (diagonal going from top-right corner to the lower-left)
*/

#include <iostream>

using namespace std;

int main() {

    int n; // amount of rows
    int m; // amount of columns

    cin >> n >> m;

    int a[n][m]; // a 2d array with n rows and m columns
    
    // input
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i][m - 1 - i] << endl;
    }

    return 0;
}