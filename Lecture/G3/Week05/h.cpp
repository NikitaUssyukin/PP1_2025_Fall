/*
Demonstration of how subscript operator works
*/

#include <iostream>

using namespace std;

int main() {

    int a[3] = {1, 2, 3};

    // pointer (address of the element) << 
    // value of the element using the subscript <<
    // value of the element by dereferencing a pointer
    cout << a << ' ' << a[0] << ' ' << *a << endl;
    cout << a + 1 << ' ' << a[1] << ' ' << *(a + 1) << endl;
    
    return 0;
}