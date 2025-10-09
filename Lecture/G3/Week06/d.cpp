/*
Using a 2D array with nested loops
*/

#include <iostream>

using namespace std;

int main() {

    // I/O from txt and into txt
    freopen("input.txt", "r", stdin);   // enables input from the txt 
    freopen("output.txt", "w", stdout); // enables output from the txt
    // If you use this, make sure
    // to comment out the freopen lines

    int n; // amount of rows
    int m; // amount of columns

    cin >> n >> m;

    int a[n][m]; // 2D array with n rows and m columns

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