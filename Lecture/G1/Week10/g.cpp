/*
STL
Set, finding an element
*/

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    set<int> s;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int target;
    cin >> target;

    if(s.find(target) != s.end()) cout << "target " << target << " was found!\n";
    else cout << "target was not found!\n";

    return 0;
}