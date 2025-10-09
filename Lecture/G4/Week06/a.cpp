/*
2D Arrays
We can say that 2D arrays have "rows" and "colums"
For the computer, 2D array is an array of 1D arrays

Syntax
Declaration:
dataType arrayName[amountOfRows][amountOfColumns];

Accessing elements:
arrayName[indexRow][indexColumn];
*/

#include <iostream>

using namespace std;

int main() {

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << a[0][0] << endl; // first element of the first row
    cout << a[1][2] << endl; // third element of the second row
    cout << a[2][1] << endl; // second element of the third row

    return 0;
}