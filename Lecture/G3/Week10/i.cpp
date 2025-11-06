/*
STL
Map
Counting occurences of strings
*/

#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        ++m[word];
    }

    for(pair<string, int> p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}