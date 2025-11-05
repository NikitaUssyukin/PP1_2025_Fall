/*
STL
Vector
ways to take input into the vector
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
    while(ss >> x) {
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}