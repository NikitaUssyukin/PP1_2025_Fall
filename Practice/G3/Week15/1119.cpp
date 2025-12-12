#include <iostream>

using namespace std;

int a[100][100];

int n, m;

bool checkCoolRec(int i, int j) {
    if(i >= n - 1 || j >= m - 1) return true;
    if(
        a[i][j] == a[i + 1][j] &&
        a[i][j] == a[i + 1][j + 1] &&
        a[i][j] == a[i][j + 1]
    ) {
        return false;
    }
    return true && checkCoolRec(i + 1, j) && checkCoolRec(i + 1, j + 1) && checkCoolRec(i, j + 1);
}

int main() {
    cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) 
            cin >> a[i][j];
    }

    if(checkCoolRec(0, 0)) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}