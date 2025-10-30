/*
Global and local variables
*/

#include <iostream>

using namespace std;


int input_num() {
    int a;
    cin >> a;
    return a;
}

int increase_num_by_1(int a) {
    a += 1;
    return a;
}

void print_num(int a) {
    cout << a << endl;
}

int main() {
    
    int a = 0; // local variable
    
    a = input_num();

    a = increase_num_by_1(a);
    a = increase_num_by_1(a);
    a = increase_num_by_1(a);

    print_num(a);

    return 0;
}