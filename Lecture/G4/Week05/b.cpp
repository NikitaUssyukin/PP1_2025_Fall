/*
Outputting elements of an array with a for loop
*/

#include <iostream>

using namespace std;

int main() {

    int a[3] = {1, 2, 3};

    for(int i = 0; i < 3; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}