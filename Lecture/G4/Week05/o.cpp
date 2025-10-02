/*
Example:
Linear search
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
        if(target == a[i]) {
            cout << "target found at index " << i << endl;
            return 0; // stops the program
        }
    }

    cout << "target not found" << endl;
    
    return 0;
}