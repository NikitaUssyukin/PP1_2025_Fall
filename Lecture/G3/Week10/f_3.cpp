/*
STL
Set
Basic example
*/

#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> s; // empty set

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int target;
    cin >> target;

    if(s.find(target) != s.end()) {
        cout << "target " << target << " was found!\n";
    }
    else {
        cout << "target " << target << " was not found!\n";
    }

    return 0;
}
