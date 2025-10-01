/*
Arrays

What is an array?

An array is a structured sequence of related information

Types of arrays
- static (pointer-based arrays), dynamic (vector) 
- one-dimensional (1d), multi-dimensional (2d or more)
- homogenous (all arrays in C++), heterogenous (i.e. lists in Python)

Syntax for declaring an array:

dataType arrayName[arraySize];

Accessing an element in an array:

arrayName[elementIndex];

Important: indexes in arrays always start from 0
and the last index is always arraySize-1
*/

#include <iostream>

using namespace std;

int main() {

    int n = 3; // arraySize

    int a[n]; // array a is declared with the size of 3
    // but we did not specify any values yet
    // so the array contains "junk values" (undefined values)

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << endl;
    }

    return 0;
}
