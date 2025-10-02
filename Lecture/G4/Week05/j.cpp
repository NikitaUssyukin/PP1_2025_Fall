/*
How the subscript operator [] works with arrays
*/

#include <iostream>

using namespace std;

int main() {

    int n = 3;

    int a[3] = {1, 2, 3};

    cout << a << ' ' << a[0] << ' ' << *a << endl; // first element
    cout << a + 1 << ' ' << a[1] << ' ' << *(a + 1) << endl;

    // a[i] works the same way as *(a + i)

    cout << a + n << endl; // address of the element after the last

    return 0;
}