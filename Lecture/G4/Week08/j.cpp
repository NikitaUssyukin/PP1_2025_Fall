/*
input with getline (allows to input strings with spaces)
*/

#include <iostream>

using namespace std;

int main() {

    string s1, s2, s3;

    s1 = "cat";
    s2 = s1;
    s3 = s1;

    s2[0] = s3[2] = 'r';

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    return 0;
}