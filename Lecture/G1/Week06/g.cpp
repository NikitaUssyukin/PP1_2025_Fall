/*
Sorting/reversing a part of the 2d array using <algorithm>
*/

#include <iostream>
#include <algorithm>

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

    int first_i, first_j; // indexes of the first element in the range
    int last_i, last_j; // indexes of the last element in the range

    cin >> first_i >> first_j;
    cin >> last_i >> last_j;

    sort(*a + first_i * m + first_j, *a + last_i * m + last_j + 1);
    // reverse(*a + first_i * m + first_j, *a + last_i * m + last_j + 1);

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}