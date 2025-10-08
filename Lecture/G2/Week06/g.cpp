/*
Sorting/reversing a specific range of elements in a 2D array using <algorithm>
*/

#include <iostream>
#include <algorithm>

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

    int first_i, first_j;
    int last_i, last_j;

    cin >> first_i >> first_j >> last_i >> last_j;

    sort(*a + first_i * m + first_j, *a + last_i * m + last_j + 1);
    // reverse(*a + first_i * m + first_j, *a + last_i * m + last_j + 1);
    
    // output
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}