/*
Local and global variables
*/

#include <iostream>

using namespace std;

int input_num() {
    int num;
    cin >> num;
    return num;
}

int increase_num_by_1(int num) {
    num += 1;
    return num;
}

void print_num(int num) {
    cout << num << endl;
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