/*
accessing individual elements
*/

#include <iostream>

using namespace std;

int main() {

    string s = "world";

    // accessing the first element
    cout << s[0] << endl;
    cout << s.at(0) << endl;
    cout << s.front() << endl;   // if s.front() does not compile, use -std=c++11
    cout << *s.begin() << endl;  // s.begin() is an iterator, it contains an address (points to something)
                                 // *s.begin() -> *address -> value stored at the address
    
    // accessing the last element
    cout << s[s.size() - 1] << endl;
    cout << s.at(s.size() - 1) << endl;
    cout << s.back() << endl;          // if s.back() does not compile, use -std=c++11
    cout << *(s.end() - 1) << endl;    // s.end() is an iterator, it contains an address (points to something)

    return 0;
}