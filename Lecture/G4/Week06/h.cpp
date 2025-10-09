/*
Take n - size of an n by n array
fill the diagonals with '*'
above the main diag - '.'
below the main diag - '+'
*/

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    char a[n][n];

    // filling the array
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < n; ++j) { // inner loop
            if(i == j || i + j == n - 1) a[i][j] = '*';
            else if(i < j) a[i][j] = '.';
            else a[i][j] = '+';
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}