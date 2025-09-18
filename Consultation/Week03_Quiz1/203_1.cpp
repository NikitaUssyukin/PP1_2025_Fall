#include <iostream>

using namespace std;

int main() {

    char ch;
    cin >> ch;

    // implicitly type casting char into int
    // and then explicitly type casting back into char
    cout << char(ch + 1) << endl;

    return 0;
}