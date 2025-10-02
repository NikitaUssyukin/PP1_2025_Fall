/*
Range-based for loops
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // To compile the code with range based for loops
    // use the -std=c++11 flag
    // Example: g++ l.cpp -std=c++11

    int a[3] = {1, 2, 3};

    for(int &x : a) { // here x can modify the elements
        x *= 2;
    }

    for(int x : a) {
        cout << x << ' ';
    }

    return 0;
}