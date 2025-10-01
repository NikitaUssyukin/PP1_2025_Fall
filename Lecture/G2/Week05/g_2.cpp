/*
Example:
Taking n elements and finding the maximal value among them
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

    int mx; // maximal value
    mx = a[0]; // we take the first element of the array as our maximum

    for(int i = 1; i < n; ++i) { // i starts from 1 because we skip the first element
        if(mx < a[i]) mx = a[i];
    }
    cout << mx << endl;

    return 0;
}