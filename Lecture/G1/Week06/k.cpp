/*
Determine if the 2d array is symmetrical over the main diagonal
*/

#include <iostream>

using namespace std;

int main() {

    int n; // amount of rows and columns (n by n)

    cin >> n;

    int a[n][n]; // a 2d array with n rows and n columns
    
    // input
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(a[i][j] == a[j][i]) continue;
            else {
                cout << "Not symmetrical\n";
                return 0; // stops the program
            }
        }
    }

    cout << "Symmetrical\n";

    return 0;
}