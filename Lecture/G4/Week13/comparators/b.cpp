/*
Declare and implement a comparator that will allow us to 
sort the vector such that all the odd numbers go in ascending order 
before all the even numbers, also sorted in the same order

5
1 2 3 4 5 -> 1 3 5 2 4

3
13 7 -2   -> 7 13 -2
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    if(a % 2 == b % 2) { // same "evenness"
        return a < b;
    }
    else {
        return a % 2;
    }
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

    sort(v.begin(), v.end(), cmp);

    // DO NOT FORGET: -std=c++11
    for(int x : v) cout << x << " ";
    cout << endl;

    return 0;
}