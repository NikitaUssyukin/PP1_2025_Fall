/*
Finding the indexes of the row and column of the maximal number
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

    int max_i = 0;
    int max_j = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = 1; j < m; ++j) {
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