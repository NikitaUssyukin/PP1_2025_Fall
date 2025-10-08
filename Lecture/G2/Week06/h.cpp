/*
Position of the max element
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

    int max_i = 0, max_j = 0;

    // finding max
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
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