/*
void return type
*/

#include <iostream>

using namespace std;

void a_plus_b(int a, int b) {
    int c = a + b;
    cout << c << endl;
}

int main() {

    a_plus_b(2, 7);

    return 0;
}