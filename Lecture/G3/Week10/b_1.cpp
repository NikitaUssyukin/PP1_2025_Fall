/*
STL
Vector
Infinite input
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    int x;
    while(cin >> x) {    // pass any symbol/string to stop the input
        v.push_back(x);  // but on ejudge, input will stop automatically
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
