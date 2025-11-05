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
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;
    */

    // How range based for loops are implemented - this is what happens above
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        int x = *it;
        cout << x << " ";
    }
    cout << endl;

    return 0;
}