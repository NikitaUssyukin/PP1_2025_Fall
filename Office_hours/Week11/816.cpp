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

    pair<int, int> res = *(++m.begin());
    /*
    pair<int, int> res  -  stores the element from the map as a pair
    m.begin()           -  iterator pointing at the first element of the map 
                           (contains an address of the element)
    ++m.begin()         -  ++ here switches the iterator from the first element
                           to the second (++ switches to the next element, -- to the prev element)
    *(++m.begin())      -  * here takes the address stored in the iterator
                           and returns us a value stored at this address
                           which is a pair of <int, int> in this case
    */

    cout << res.second << endl;

    return 0;
}