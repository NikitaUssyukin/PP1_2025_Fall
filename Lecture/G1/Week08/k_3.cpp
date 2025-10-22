/*
append
*/

#include <iostream>

using namespace std;

int main() {

    string s1 = "car";
    
    s1 += int('p');
    s1 += int('e');
    s1 += int('t');

    cout << s1 << endl;
    
    return 0;
}