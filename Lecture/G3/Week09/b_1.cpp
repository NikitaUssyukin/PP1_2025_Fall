/*
Global and local variables
*/

#include <iostream>

using namespace std;

int a = 0; // global variable

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