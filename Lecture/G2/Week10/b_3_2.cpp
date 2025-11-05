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
    
    // standard for loop, but with iterator instead of index
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); ++it) {
        cout << *it << " "; // * dereferences the address stored in it
                            // i.e. gets the values stored at this address
    }
    cout << endl;

    return 0;
}