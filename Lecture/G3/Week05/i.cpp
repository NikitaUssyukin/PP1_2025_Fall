/*
Sorting a portion of the array, from index l to index r
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int l, r; // inclusive range of indexes that we sort [l;r]
    cin >> l >> r;

    sort(a + l, a + r + 1); 
    
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}