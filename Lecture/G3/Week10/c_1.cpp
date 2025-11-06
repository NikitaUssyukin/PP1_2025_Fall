/*
STL
Vector
Outputting elements
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v; // empty vector

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    /*
    // standard for loop
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    */

    // range based for loop
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
