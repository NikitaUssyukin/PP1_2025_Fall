/*
Arrays 

What is an array?

An array is an ordered sequence of related elements

Examples of arrays in real life:
- Alphabet
- Calendar
- Buildings on the street
- Any list: list of contacts, music playist, etc
- A deck of cards
- A train with its cars

Types of arrays:
- static (pointer based arrays), dynamic (class string, vector)
- one-dimensional and multi-dimensional (2d or more)
- homogenous (all arrays in C++), heterogenous (lists in Python)

Syntax, declaring an array:

dataType arrayName[arraySize];

to access elements of the array, we use indexes:

arrayName[elementIndex]

where element index is [0;arraySize-1]
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