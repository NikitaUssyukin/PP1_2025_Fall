/*
Quadratic complexity of nested loops (O(n^2))
*/

#include <iostream>

using namespace std;

int main() {

    int n = 1000000;

    // cin >> n;

    long long cnt = 0;

    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < n; ++j) { // inner loop
            ++cnt;
        }
    }

    cout << cnt << endl;

    return 0;
}