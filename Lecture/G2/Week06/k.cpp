/*
Determine if a sqare matrix (n by n 2D array) is symmetrical over the main diagonal
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n; // amount of rows and columns

    cin >> n;

    // 2D array with n rows and n columns
    int a[n][n];
    
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
                return 0; // stops the whole program
            }
        }   
    }

    cout << "Symmetrical\n";

    return 0;
}