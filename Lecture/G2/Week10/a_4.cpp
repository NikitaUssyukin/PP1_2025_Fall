/*
STL
Vector
Infinite input using stringstream
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

    // cout << v.size() << endl;
    
    int x;
    while(ss >> x) {
        v.push_back(x);
    }
    
    // cout << v.size() << endl;

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}