/*
Example:
Taking n elements and calculating their decimal average
*/

#include <iostream>

using namespace std;

int main() {

    int n; 
    cin >> n; 

    int a[n]; 

    double sum = 0; // important - sum should always start from 0
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    cout << sum / n << endl;

    return 0;
}