/*
2D Arrays

They can be thought of as "matrices" or "tables"

2D Arrays have 2 indexes instead of 1
We can say that 2D arrays have "rows" and "columns"
When specifying an element of the array:
- the first index specifies the column
- the second index specifies the row
*/

#include <iostream>

using namespace std;

int main() {

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // a 2d array with 3 rows and 3 columns
    
    cout << a[0][0] << endl; // the first element of the first row
    cout << a[1][2] << endl; // the third element of the second row
    cout << a[2][1] << endl; // the second element of the third row

    return 0;
}