/*
STL
Vector
ways to take input into the vector
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

    for(int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}