/*
Outputting elements of the main diagonal of an n by n 2D array
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n; // amount of rows and columns

    cin >> n;

    // 2D array with n rows and n columns
    int a[n][n];
    
    // input
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i][i] << endl;   
    }

    return 0;
}