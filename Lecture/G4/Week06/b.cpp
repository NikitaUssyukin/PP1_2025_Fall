/*
Example of using a not-nested for loop
*/

#include <iostream>

using namespace std;

int main() {

    int n = 3;
    int m = 3;

    int a[n][m] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i = 0; i < n * m; ++i) {
        int r = i / n; // row index
        int c = i % m; // col index
        cout << a[r][c] << " "; 
        if(i % m == m - 1) cout << endl;
    }

    return 0;
}