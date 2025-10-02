/*
Range-based for loops
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // To compile the code with range based for loops
    // use the -std=c++11 flag
    // Example: g++ m.cpp -std=c++11

    int n;
    cin >> n;

    int a[n];

    for(int &x : a) { // here x can modify the elements
        cin >> x;
    }

    for(int &x : a) { // here x can modify the elements
        x *= 2;
    }

    for(int x : a) { // here x is only a copy, it cannot modify array elements
        cout << x << ' ';
    }

    return 0;
}