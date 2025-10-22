/*
accessing elements using for loops
*/

#include <iostream>

using namespace std;

int main() {

    string s = "cat";

    for(char c : s) { // c is a read-only copy
        if(c == 'c') c = 'r';
    }
    cout << s << endl;
    //       & - reference to the original element
    for(char &c : s) {        // c can now modify the original string
        if(c == 'c') c = 'r';  
    }
    cout << s << endl;

    return 0;
}