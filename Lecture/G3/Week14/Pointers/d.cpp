/*
Working with arrays using pointers
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> *(a + i);    
        // *(a + i) is the same as a[i]
    }

    for(int i = 0; i < n; ++i) {
        cout << *(a + i) << endl;    
    }

    return 0;
}