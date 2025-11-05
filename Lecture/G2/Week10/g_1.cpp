/*
Pair
*/

#include <iostream>

using namespace std;

int main() {

    pair<string, int> p = make_pair("Apples", 20);

    cout << p.first << endl;
    cout << p.second << endl;

    return 0;
}