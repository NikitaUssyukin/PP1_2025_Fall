/*
size_t demonstration
*/

#include <iostream>

using namespace std;

int main() {

    string s = "test";

    size_t n = s.size();
    size_t npos = string::npos;
    size_t minus_overflow = -1;
    size_t plus_overflow = string::npos + 1;
    
    cout << n << endl;
    cout << npos << endl;
    cout << minus_overflow << endl;
    cout << plus_overflow << endl;

    return 0;
}