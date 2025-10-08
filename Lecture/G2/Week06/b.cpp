/*
Nested loops
A nested loop is essentially a loop inside another loop

Below we have an example of a nested for-loop
*/

#include <iostream>

using namespace std;

int main() {

    int n; // repetitions of the outer for loop
    int m; // repetitions of the inner for loop 

    cin >> n >> m;
    
    for(int i = 0; i < n; ++i) {
        
        for(int j = 0; j < m; ++j) {
            cout << "[" << i << "][" << j << "] ";
        }
        cout << endl;

    }

    return 0;
}