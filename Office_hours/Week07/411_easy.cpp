// Not intended to be solved like that, but works

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[200000]; // accomodates the possible size of a and b from input combined

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int m;
    cin >> m;

    for(int i = n; i < n + m; ++i) {
        cin >> a[i];
    }

    sort(a, a + n + m); // sorts the whole array

    for(int i = 0; i < n + m; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}