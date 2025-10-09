/*
I/O from and to .txt file
*/

#include <iostream>

using namespace std;

int main() {

    freopen("input.txt", "r", stdin);   // input from txt
    freopen("output.txt", "w", stdout); // output to txt

    int n;

    cin >> n;

    char a[n][n];

    // input
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < n; ++j) { // inner loop
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i < j) {
                if(a[i][j] == a[j][i]) continue;
                else {
                    cout << "Not symmetrical\n";
                    return 0; // stops the program
                }
            }        
        }
    }

    cout << "Symmetrical\n";

    return 0;
}