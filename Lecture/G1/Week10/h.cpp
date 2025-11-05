/*
STL
Set, erasing an element
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

    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;

    int target;
    cin >> target;

    if(s.find(target) != s.end()) {
        s.erase(s.find(target));
        cout << "target " << target << " was found and erased!\n";
    }
    else {
        cout << "target was not found!\n";
    }
    
    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}