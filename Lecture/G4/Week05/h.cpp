/*
Reversing an array of size n
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

    // reverses the array elements in-place
    for(int i = 0; i < n / 2; ++i) {
        swap(a[i], a[n - 1 - i]);
        // same as:
        // int temp = a[i];
        // a[i] = a[n - 1 - i];
        // a[n - 1 - i] = temp;
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}