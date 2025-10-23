/*
concatenate
and
append
*/

#include <iostream>

using namespace std;

int main() {

    string s1 = "car";
    string s2 = "pet";

    cout << s1 + s2 << endl;

    s1 = "car";
    s1 += "pet";

    cout << s1 << endl;

    s1 = "car";
    s1 += 'p';
    s1 += 'e';
    s1 += 't';

    cout << s1 << endl;

    s1 = "car";
    s1 += int('p');
    s1 += int('e');
    s1 += int('t');

    cout << s1 << endl;

    return 0;
}