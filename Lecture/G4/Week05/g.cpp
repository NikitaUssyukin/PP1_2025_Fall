/*
Outputting an array of size n in reverse
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // The output is in reverse order - last element is output first, then the element before the last, etc
    // the array itself is not changed
    for(int i = n - 1; i >= 0; --i) {
        cout << a[i] << " ";
    }

    return 0;
}