/*
2D Array

You can think of 2D arrays as matrices/tables
i.e. having "rows" and "columns"

For the computer, a 2D array is an array of 1D arrays

Syntax
Declaration:
int a[n][m];
(dataType arrayName[rowNumber][columnNumber];)

Accessing elements:
a[i][j];
(arrayName[rowIndex][columnIndex])
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