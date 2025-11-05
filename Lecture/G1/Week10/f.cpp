/*
STL
Set
*/

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    set<int> s;
    
    cout << s.size() << endl;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << s.size() << endl;

    return 0;
}