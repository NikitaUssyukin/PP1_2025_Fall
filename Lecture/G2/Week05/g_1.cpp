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
    
    int mx; // maximal value
    cin >> a[0]; // input the first element of the array
    mx = a[0]; // we take the first element of the array as our maximum

    for(int i = 1; i < n; ++i) {
        cin >> a[i];
        if(mx < a[i]) mx = a[i];
    }
    
    cout << mx << endl;

    return 0;
}