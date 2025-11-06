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
    // range based for loop
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;
    */
    
    // same thing as above
    // range-based for loops are sytactic sugar
    // for the following for loop
    for(auto it = v.begin(); it != v.end(); ++it) {
        int x = *it;
        cout << x << " "; // * dereferences the iterator - gets the value 
                            // stored at the address specified by the iterator
    }
    cout << endl;
    

    return 0;
}
