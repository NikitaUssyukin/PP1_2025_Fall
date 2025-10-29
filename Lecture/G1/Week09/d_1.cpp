/*
same example as previous, but with a local variable
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

int print_num(int num) {
    cout << num << endl;
    return num;
}

int main() {
    
    int a = 0; // local variable - located inside the scope of the main function
    
    a = input_num();

    a = increase_num_by_1(a);
    a = increase_num_by_1(a);
    a = increase_num_by_1(a);

    print_num(a);

    return 0;
}