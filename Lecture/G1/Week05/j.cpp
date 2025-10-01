/*
Range-based for loops
*/

#include <iostream>

using namespace std;

int main() {

    int a[] = {1, 2, 3, 4, 5}; // size is inferred

    // on KBTU PCs, use std=c++11 flag
    // e.g.: g++ j.cpp -std=c++11
    for (int &x : a) x *= 2;           // modifies elements
    for (int x : a) cout << x << ' ';  // read-only copy

    cout << endl;

    return 0;
}
