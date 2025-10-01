/*
Example:
Taking n elements, sorting them in ascending order and then outputting the result
*/

#include <iostream>
#include <algorithm> // needed for sort, reverse

using namespace std;

int main() {

    int n; 
    cin >> n; 

    int a[n];
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n); // sorts all the elements of the array a (indexes in range [0; n-1])

    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}