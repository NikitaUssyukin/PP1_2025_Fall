#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int max_idx = 0;

    for(int i = 0; i < n; ++i) {
        if(a[i][i] > a[max_idx][max_idx]) {
            max_idx = i;
        }
    }

    cout << a[max_idx][max_idx] << endl;
    cout << max_idx + 1 << " " << max_idx + 1 << endl;

    return 0;
}