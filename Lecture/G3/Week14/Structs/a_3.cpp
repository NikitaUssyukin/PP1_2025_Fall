/*
Struct
*/

#include <iostream>

using namespace std;

struct Pair {
    int first;
    int second;
};

int main() {

    Pair p;

    cin >> p.first >> p.second;

    cout << p.first << " " << p.second << endl;

    return 0;
}