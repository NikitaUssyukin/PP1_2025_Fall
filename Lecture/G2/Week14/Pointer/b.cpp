/*
Pointers
*/

#include <iostream>

using namespace std;

int main() {

    int a = 4;
    int* ptr = &a;

    *ptr = 5;
    cout << a << endl;

    return 0;
}