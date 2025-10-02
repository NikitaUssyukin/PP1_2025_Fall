/*
Demonstration of "junk values" (undefined values)
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // IMPORTANT: The code below demonstrates an error - it is incorrect

    int n;
    cin >> n;

    int a[n]; // an array with uninitialized elements

    // outputting "junk values"
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    
    return 0;
}