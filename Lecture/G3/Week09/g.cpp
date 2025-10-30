/*
sum of 2d
*/

#include <iostream>

using namespace std;

int sum_2d(int a[][1000], int n, int m) {
    int sum = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            sum += a[i][j];
        }
    }
    return sum;
}

int main() {
    
    int n, m;
    cin >> n >> m;

    int a[n][1000];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    cout << sum_2d(a, n, m) << endl;

    return 0;
}