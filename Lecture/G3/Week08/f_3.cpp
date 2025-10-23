/*
partial sort of the string
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string s = "KAZAKHSTAN";

    sort(s.begin() + 1, s.begin() + 6); // sorts the range of indexes [1; 5]

    cout << s << endl;

    return 0;
}