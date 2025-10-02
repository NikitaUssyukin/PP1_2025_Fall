/*
Declaring an array of physical size 10000
and logical size n
so that the array can be filled with 0's initially
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[10000] = {}; // an array with 10000 0's

    int n; // logical size - the amount of elements we're going to use
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    
    return 0;
}