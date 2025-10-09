/*
Sorting/reversing all the elements in a 2D array using <algorithm>
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

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

    sort(*a, *a + n * m);
    // for 1D arrays:
    // int a[5] = {1, 9, 0, -2, 4};
    // sort(a, a + 5);

    // output
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < m; ++j) { // inner loop
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}