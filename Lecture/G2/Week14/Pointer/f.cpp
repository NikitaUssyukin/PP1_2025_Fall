/*
Working with arrays using pointers
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    int* ptr = a;
    for(int i = 0; i < n; ++i) {
        cin >> *ptr;    
        ++ptr;
    }

    ptr = a;
    for(int i = 0; i < n; ++i) {
        cout << *ptr << endl;
        ++ptr;    
    }

    return 0;
}