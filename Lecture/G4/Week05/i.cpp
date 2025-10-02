/*
Reversing an array of size n using the reverse() from <algorithm>
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

    // reverses the array elements in-place
    reverse(a, a + n); // reverses the whole array

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}