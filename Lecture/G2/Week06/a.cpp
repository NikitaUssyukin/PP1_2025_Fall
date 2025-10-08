/*
2D Arrays

We can think of a 2D array as a matrix or a table
i.e. something that has rows and columns

For the computer, a 2D array is an array of 1D arrays

Declaration of 2D arrays:
int a[n][m]; // n rows and m columns

Accessing an element of a 2D array:
int a[i][j]; // i is the index of the row
             // j is the index of the column
*/

#include <iostream>

using namespace std;

int main() {

    // 2D array with 3 rows and 3 columns
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    cout << a[0][0] << endl; // first element of the first row
    cout << a[1][2] << endl; // third element of the second row
    cout << a[2][1] << endl; // second element of the third row

    return 0;
}