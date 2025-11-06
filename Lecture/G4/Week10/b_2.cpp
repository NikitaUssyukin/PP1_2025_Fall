/*
STL
Vector
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        // cout << "vector size: " << v.size() << endl;
        v.push_back(x);
    }
    // cout << "vector size: " << v.size() << endl;

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}