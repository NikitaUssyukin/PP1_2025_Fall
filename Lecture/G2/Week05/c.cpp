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
- static (pointer based arrays), dynamic (vector)
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

    int n; // the size of the array
    cin >> n; // size is taken as input from the terminal

    int a[n]; // array a with size n

    for(int i = 0; i < n; ++i) {
        cin >> a[i]; // taking input into element with index i
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << endl; // element with index i
    }

    return 0;
}