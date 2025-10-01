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

    int a[3] = {1, 2, 3};

    for(int i = 0; i < 3; ++i) {
        cout << a[i] << endl;
    }

    return 0;
}
