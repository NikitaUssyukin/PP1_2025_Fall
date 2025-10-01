/*
Example:
Taking n elements and finding the index of the maximal value among them
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

    int max_i = 0; // the index of the maximal value;
    // we take the first element of the array as our maximum

    for(int i = 1; i < n; ++i) {
        if(a[max_i] < a[i]) max_i = i;
    }
    cout << max_i << endl;

    return 0;
}