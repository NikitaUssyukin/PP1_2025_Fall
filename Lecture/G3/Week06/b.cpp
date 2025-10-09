/*
Nested loops
Nested - a loop inside another loop

Below we have an example of a nested for loop
*/

#include <iostream>

using namespace std;

int main() {

    int n; // amount of rows
    int m; // amount of columns

    cin >> n >> m;

    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < m; ++j) { // inner loop
            cout << "[" << i << "][" << j << "] ";
        }
        cout << endl;
    }

    return 0;
}