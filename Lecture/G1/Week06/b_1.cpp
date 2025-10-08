/*
Nested loops
A nested loop is a loop located inside another loop

Below we cover nested for loops
*/

#include <iostream>

using namespace std;

int main() {

    // a nested for loop that will go over the indexes 
    // in the range [0; 3) 
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << "[" << i << "][" << j << "] ";
        }
        cout << endl;
    }    

    return 0;
}