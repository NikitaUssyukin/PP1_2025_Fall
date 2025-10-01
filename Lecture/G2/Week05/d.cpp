// 

#include <iostream>

using namespace std;

int main() {

    int n; // the size of the array
    cin >> n; // size is taken as input from the terminal

    int a[n]; // array a with size n

    // ERROR - using array elements before initializing them
    // i.e. before giving them a specific value
    // this leads to "junk values" (undefined values)
    for(int i = 0; i < n; ++i) {
        cout << a[i] << endl; // element with index i
    }

    return 0;
}