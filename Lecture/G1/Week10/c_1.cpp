/*
STL
Vector
ways to output data from the vector
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
    // Usual for loop
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    */

    // Range-based for loop, non-modifying, read-only
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}