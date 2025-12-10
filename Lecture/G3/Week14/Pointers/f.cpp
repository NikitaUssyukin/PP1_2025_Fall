/*
Working with arrays using pointers
*/

#include <iostream>

using namespace std;

void inputArray(int* ptr, int n) {
    for(int i = 0; i < n; ++i) {
        cin >> *ptr;    
        ++ptr;
    }
}

void outputArray(int* ptr, int n) {
    for(int i = 0; i < n; ++i) {
        cout << *ptr << endl;
        ++ptr;    
    }
}

int main() {

    int n;
    cin >> n;

    int a[n];

    inputArray(a, n);

    outputArray(a, n);

    return 0;
}