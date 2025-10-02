/*
Array

What is an array?
It is an ordered sequence of related elements

Examples of arrays:
- Subway train with its cars (1d-array)
- Tables (2d-array)
- A shelf with various things (heterogenous array)
- Various lists: list of products, music playlist, etc (1d-arrays) 

Types of array:
- static (pointer-based arrays) and dynamic (class string, vector)
- one-dimensional and multi-dimensional (2d or more)
- homogenous (the case in C++) and heterogenous (used in Python, e.g. list)

Syntax
Array declaration:
dataType arrayName[arraySize];
where arraySize is the amount of elements the array can store

Accessing elements of the array:
arrayName[elementIndex];
where elementIndex is the index of the element we want to access
index must always be withing the range [0; arraySize-1]
*/

#include <iostream>

using namespace std;

int main() {

    int a[3] = {1, 2, 3};

    cout << a[0] << endl; // first element
    cout << a[1] << endl; // second element
    cout << a[2] << endl; // third element
    
    return 0;
}