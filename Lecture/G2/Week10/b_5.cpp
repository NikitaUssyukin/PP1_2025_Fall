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

    // by using the auto keyword we do not need to 
    // manually specify the long name of the iterator
    for(auto it = v.begin(); it != v.end(); ++it) {
        int x = *it;
        cout << x << " "; 
    }
    cout << endl;

    return 0;
}