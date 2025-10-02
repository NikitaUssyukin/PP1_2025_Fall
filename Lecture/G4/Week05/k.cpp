/*
Sorting an array within the inclusive range of indexes from l to r
in ascending order
*/

#include <iostream>
#include <algorithm> // contains reverse() (also sort())

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int l, r;
    cin >> l >> r;

    // sort the array elements in-place between [l;r] inclusive
    sort(a + l, a + r + 1);

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}