// ASCII code

#include <iostream>

using namespace std;

int main() {

    char a;
    cin >> a; // a is [A;Z]
    // we want to get the next letter

    if(a == 'Z') {
        cout << 'A' << endl;
    }
    else 
        cout << char(a + 1) << endl;


    return 0;
}