/*
Using range-based for loops
*/

#include <iostream>

using namespace std;

int main() {

    int a[5] = {1, 2, 3, 4, 5};

    // to compile, add the -std=c++11 flag
    // e.g.: g++ q.cpp -std=c++11
    for(int &x : a) x *= 2;  // &x can modify the elements of array a
    for(int x : a) cout << x << endl;  // x is a read-only copy

    return 0;
}