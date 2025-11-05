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

    // Usual for loop but with iterators
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " "; // * here performs the dereference operation
    }
    cout << endl;

    return 0;
}