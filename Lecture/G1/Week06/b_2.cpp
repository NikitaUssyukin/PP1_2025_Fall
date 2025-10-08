/*
Nested loops
A nested loop is a loop located inside another loop

Below we cover nested for loops
*/

#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    // a nested for loop that will go over the indexes 
    // in the range [0; n) for rows
    // and [0; m) for columns 
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << "[" << i << "][" << j << "] ";
        }
        cout << endl;
    }    

    return 0;
}