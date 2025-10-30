/*
Function that takes a 1d array and doubles its elements
*/

#include <iostream>

using namespace std;

void double_elements_of_1d(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        a[i] *= 2;
    }
}

int main() {
    
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << a << endl;

    double_elements_of_1d(a, n);

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}