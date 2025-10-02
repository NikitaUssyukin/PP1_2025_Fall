/*
Example:
Finding the index of the max value
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

    int mx_i = 0;

    for(int i = 1; i < n; ++i) {
        if(a[i] > a[mx_i]) {
            mx_i = i;
        }
    }

    cout << mx_i << endl;
    
    return 0;
}