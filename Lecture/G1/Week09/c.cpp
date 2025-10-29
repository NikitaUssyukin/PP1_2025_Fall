/*
example with a global variable
*/

#include <iostream>

using namespace std;

int a; // global variable - located in the global scope

void input_a() {
    cin >> a;
}

void increase_a_by_1() {
    a += 1;
}

void print_a() {
    cout << a << endl;
}

int main() {

    input_a();

    increase_a_by_1();
    increase_a_by_1();
    increase_a_by_1();

    print_a();

    return 0;
}