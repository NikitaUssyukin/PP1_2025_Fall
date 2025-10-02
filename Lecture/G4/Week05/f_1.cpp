/*
Demonstration of "junk values" - uninitialized elements of the array
which store undefined values
Declaring an array of size n, then immediately outputting its elements
*/

#include <iostream>

using namespace std;

int main() {
    // IMPORTANT: The code below demonstrates an error - it is incorrect

    int n;
    cin >> n;

    int a[n]; // at this point, elements of the array are not initialized
    // that means, they store undefined values or "junk values"

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}