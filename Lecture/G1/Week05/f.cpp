/*
Examples:
- take n elements and calculate their average as a decimal value
*/

#include <iostream>

using namespace std;

int main() {

    int n; 

    cin >> n; 

    int a[n];

    double sum = 0;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    cout << sum / n << endl;

    return 0;
}
