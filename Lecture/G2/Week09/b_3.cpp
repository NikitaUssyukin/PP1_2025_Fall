/*
Local and global variables
*/

#include <iostream>

using namespace std;

void input_num(int &num) {
    cin >> num;
}

void increase_num_by_1(int &num) {
    num += 1;
}

void print_num(int num) {
    cout << num << endl;
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