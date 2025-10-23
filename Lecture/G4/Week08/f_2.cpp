/*
reverse string
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string s = "KAZAKHSTAN";

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}