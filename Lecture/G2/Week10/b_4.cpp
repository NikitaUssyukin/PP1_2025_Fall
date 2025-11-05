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
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;
    */

    // same thing as above - range-based for loop is just a syntactic sugar
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        int x = *it;
        cout << x << " "; 
    }
    cout << endl;

    return 0;
}