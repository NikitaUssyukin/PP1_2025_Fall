/*
stringstream
*/

#include <iostream>
#include <sstream>

using namespace std;

int main() {

    stringstream ss;

    ss << 123 << " " << 456;

    string s1, s2;

    cout << ss.str() << endl;

    ss >> s1 >> s2;

    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}