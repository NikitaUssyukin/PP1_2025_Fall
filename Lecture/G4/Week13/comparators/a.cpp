/*
Comparators - special functions that allow us to specify the sorting order
After declaring and implementing a comparator, we can pass it to the sort function
as the 3rd argument

Example:
sort(v.begin(), v.end(), cmp);

In the above example cmp is passed as a function object
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp_ascending(int a, int b) {
    return a < b;
}

bool cmp_descending(int a, int b) {
    return a > b;
}

int main() {

    vector<int> v;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), cmp_descending);

    // DO NOT FORGET: -std=c++11
    for(int x : v) cout << x << " ";
    cout << endl;

    return 0;
}