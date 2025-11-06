/*
STL
Vector
Infinite input
*/

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    stringstream ss;

    ss << s;

    vector<int> v;

    int x;
    while(ss >> x) {    // pass any symbol/string to stop the input
        v.push_back(x);  // but on ejudge, input will stop automatically
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
