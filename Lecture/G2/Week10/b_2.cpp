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
    
    // range-based for loop
    for(int &x : v) { // x is a modifying reference
        cout << x << " ";
    }
    cout << endl;

    return 0;
}