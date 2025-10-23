/*
stringstream
*/

#include <iostream>
#include <sstream>

using namespace std;

int main() {

    stringstream ss;

    ss << "123 456";

    int a, b;

    cout << ss.str() << endl;

    ss >> a >> b;

    cout << a << endl;
    cout << b << endl;
    cout << a + b << endl;

    return 0;
}