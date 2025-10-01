/*
Example:
Taking n elements and calculating their sum
*/

#include <iostream>

using namespace std;

int main() {

    int n; 
    cin >> n; 

    int a[n]; 

    int sum = 0; // important - sum should always start from 0
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    cout << sum << endl;

    return 0;
}