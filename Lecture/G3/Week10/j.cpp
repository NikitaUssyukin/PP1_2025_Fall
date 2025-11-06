/*
STL
Map
Counting occurences of strings
*/

#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++m[x];
    }

    // min
    cout << (*m.begin()).first << endl;
    
    // max
    cout << (*(--m.end())).first << endl;

    return 0;
}