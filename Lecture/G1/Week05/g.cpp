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

    int mx = a[0];
    
    for(int i = 1; i < n; ++i) { // starting from the 2nd element
        if(a[i] > mx) mx = a[i];
    }

    cout << mx << endl;

    return 0;
}
