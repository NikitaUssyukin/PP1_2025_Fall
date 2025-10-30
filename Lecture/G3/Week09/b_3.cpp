/*
Global and local variables
*/

#include <iostream>

using namespace std;


void input_num(int &a) {
    cin >> a;
}

void increase_num_by_1(int &a) {
    a += 1;
}

void print_num(int a) {
    cout << a << endl;
}

int main() {
    
    int a = 0; // local variable
    
    input_num(a);

    increase_num_by_1(a);
    increase_num_by_1(a);
    increase_num_by_1(a);

    print_num(a);

    return 0;
}