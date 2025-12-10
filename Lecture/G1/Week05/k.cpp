/*
Range-based for loops
*/

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int a[n];

    // on KBTU PCs, use -std=c++11 flag
    // e.g.: g++ k.cpp -std=c++11
    
    for (int &x : a) cin >> x;         // modifies elements
    for (int &x : a) x *= 2;           // modifies elements
    for (int x : a) cout << x << ' ';  // read-only copy

    cout << endl;

    return 0;
}
