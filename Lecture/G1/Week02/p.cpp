// ASCII code

#include <iostream>

using namespace std;

int main() {

    char a;
    cin >> a; // a is [A;Y]
    // we want to get the next letter

    cout << char(a + 1) << endl;


    return 0;
}