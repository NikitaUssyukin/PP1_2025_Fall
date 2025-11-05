/*
STL
Vector
Infinite input
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    // cout << v.size() << endl;
    
    cout << v[0] << endl;

    int x;
    while(cin >> x) {
        v.push_back(x);
    }
    
    // cout << v.size() << endl;

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}