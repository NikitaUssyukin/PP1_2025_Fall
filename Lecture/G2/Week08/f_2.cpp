/*
string input
*/

#include <iostream>

using namespace std;

int main() {

    string filename;
    cin >> filename;

    freopen(filename.c_str(), "r", stdin);

    string s;

    getline(cin, s);

    cout << s << endl;

    return 0;
}