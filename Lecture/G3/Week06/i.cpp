/*
Is matrix symetrical or not over the main diagonal
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n; // amount of rows and columns

    cin >> n;

    int a[n][n]; // 2D array with n rows and m columns

    // input
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < n; ++j) { // inner loop
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(a[i][j] == a[j][i]) continue;
            else {
                cout << "Not symmetric\n";
                return 0;
            }
        }    
    }

    cout << "Symmetric\n";

    return 0;
}