/*
string output and accessing elements
*/

#include <iostream>

using namespace std;

int main() {

    string s = "hello";

    // accessing the first element
    cout << s[0] << endl;
    cout << s.at(0) << endl;
    cout << s.front() << endl;  // use -std=c++11 flag when compiling
    cout << *s.begin() << endl; // here we dereference an iterator
    
    // accessing the last element
    cout << s[s.size() - 1] << endl;
    cout << s.at(s.size() - 1) << endl;
    cout << s.back() << endl;       // use -std=c++11 flag when compiling
    cout << *(s.end() - 1) << endl; // here we dereference an iterator
    
    // output the string as is
    cout << s << endl;

    return 0;
}