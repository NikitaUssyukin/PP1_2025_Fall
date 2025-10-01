/*
Examples:
- take n elements and calculate their maximal value
*/

#include <iostream>

using namespace std;

int main() {

    int n; 

    cin >> n; 

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_i = 0; // index of the max number
    
    for(int i = 1; i < n; ++i) { // starting from the 2nd element
        if(a[i] > a[max_i]) max_i = i;
    }

    cout << max_i << endl; // in case we have multiple elements with max value
    // max_i has the index of the first maximum

    return 0;
}
