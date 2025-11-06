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

    cout << "size before input: " << s.size() << endl;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << "size after input: " <<  s.size() << endl;

    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
