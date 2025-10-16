/*
Finding the indexes of the first maximal element in an n by m 2D array
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    int m;

    cin >> n >> m;

    int a[n][m];

    // input
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < m; ++j) { // inner loop
            cin >> a[i][j];
        }
    }

    int max_i = 0; // row index of max element
    int max_j = 0; // col index of max element

    // 
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