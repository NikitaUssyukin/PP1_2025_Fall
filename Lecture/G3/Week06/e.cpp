/*
Finding the indexes of the maximal element
*/

#include <iostream>

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

    // indexes of the row and column of the max element
    int max_i = 0;
    int max_j = 0;

    // finding max
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < m; ++j) { // inner loop
            if(a[i][j] > a[max_i][max_j]) {
                max_i = i;
                max_j = j;
            }
        }
    }

    cout << "indexes: " << max_i << " " << max_j << endl;
    cout << "value: " << a[max_i][max_j] << endl;

    return 0;
}