/*
Reversing an array of size n using reverse() from <algorithm>
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

    // reversing the array in-place
    reverse(a, a + n);

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    
    return 0;
}