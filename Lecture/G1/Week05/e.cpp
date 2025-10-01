/*
Examples:
- take n elements and calculate their sum
*/

#include <iostream>

using namespace std;

int main() {

    int n; // arraySize

    cin >> n; // taking input for the size right before we declare an array

    int a[n]; // array a is declared with the size of n

    int sum = 0;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    cout << sum << endl;

    return 0;
}
