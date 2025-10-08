/*
Input/output of a 2D array with n rows and m columns using a nested for loop
*/

#include <iostream>

using namespace std;

int main() {

    int n; // amount of rows
    int m; // amount of columns

    cin >> n >> m;

    // 2D array with n rows and n columns
    int a[n][m];
    
    // input
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    
    // output
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}