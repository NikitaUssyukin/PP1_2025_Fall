/*
Array

What is an array?
It is an ordered sequence of related elements.

Examples:
- subway train with its cars (1d array)
- a sequence of ordered numbers: 1, 2, 3, ... (1d array)
- seats in a plane (2d array)
- any list: a list of students, a music playlist (1d array)

Types of arrays:
- static (pointer-based arrays) and dynamic (class string, vector)
- one-dimensional and multi-dimensional (2d or more)
- homogenous (arrays in C++), heterogenous (lists in Python)

Syntax
Declaring an array:
dataType arrayName[arraySize];
where arraySize is the amount of elements

Accessing elements:
arrayName[elementIndex];
where elementIndex must always be within the range [0; arraySize-1]

indexing in arrays is 0-based, so the first element always has the index of 0
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