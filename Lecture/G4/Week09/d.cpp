/*
Function that takes a 1d array and calculates its sum
*/

#include <iostream>

using namespace std;

int sum_1d(int a[], int n) {
    int sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += a[i];
    }
    return sum;
}


int main() {
    
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << sum_1d(a, n) << endl;

    return 0;
}