/*
Declaring an array of size n, then inputting n elements and outputting them right after
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

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}