/*
STL
Vector
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        
        v.push_back(x);
    }
    
    /*
    // standard index-based for-loop
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    */

    // same thing as above, but 
    // using a range-based for loop
    for(int x : v) { // x is a non-modifying copy (read only)
        cout << x << " ";
    }
    cout << endl;

    return 0;
}