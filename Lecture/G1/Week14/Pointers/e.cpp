/*
Pointers
*/

#include <iostream>

using namespace std;

void change_val_by_ptr(int* ptr) {
    int x;
    cin >> x;
    *ptr = x;
    // or
    // cin >> *ptr;
}

void change_val_by_ref(int& ref) {
    int x;
    cin >> x;
    ref = x;
    // or
    // cin >> ref;
}

int main() {

    int a = 4;

    change_val_by_ptr(&a);

    cout << a << endl;

    change_val_by_ref(a);

    cout << a << endl;

    return 0;
}