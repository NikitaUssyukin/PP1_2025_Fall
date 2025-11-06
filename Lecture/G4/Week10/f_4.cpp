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

    // first element
    cout << *s.begin() << endl;
    // last element
    cout << *(--s.end()) << endl;

    return 0;
}
