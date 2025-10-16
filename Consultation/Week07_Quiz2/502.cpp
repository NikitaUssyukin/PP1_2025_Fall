/*
Finding the position of the first maximal element in an n by m 2D array
*/

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int a[n][n];

    // input
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < n; ++j) { // inner loop
            cin >> a[i][j];
        }
    }

    int max_i = 0; // row index of max element
    int max_j = 0; // col index of max element

    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < n; ++j) { // inner loop
            if(a[i][j] > a[max_i][max_j]) {
                max_i = i;
                max_j = j;
            }
        }
    }
    
    cout << max_i + 1 << " " << max_j + 1 << endl; // +1 converts an index into a position

    return 0;
}