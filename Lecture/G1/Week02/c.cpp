/*
What general operations with data we have in programming?
- input
- processing
- storage of data
- output
*/

// logical operators - AND, OR, NOT (&&, ||, !)
// they work with boolean values - true/false

#include <iostream>

using namespace std;

int main() {

    bool a, b;
    cin >> a >> b;

    cout << "AND: " << (a && b) << endl;
    cout << "OR: " << (a || b) << endl;
    cout << "NOT: " << (!a) << endl;

    return 0;
}