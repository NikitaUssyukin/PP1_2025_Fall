/*
Using a nested for loop to output elements of a 2D-array
*/

#include <iostream>

using namespace std;

int main() {

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // a 2d array with 3 rows and 3 columns
    
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}