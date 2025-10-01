/*
Examples:
Linear search - take n elements and then a target value
and output whether the value is found. If it is found, also output its index
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

    int target;
    cin >> target;
    
    for(int i = 0; i < n; ++i) { 
        if(a[i] == target) {
            cout << "target found, index is " << i << endl;
            return 0; // stops the program
        }
    }

    cout << "target not found" << endl;

    return 0;
}
