/*
Example:
Taking n elements, sorting them in ascending order, but ignoring the first and the last element.
Then, outputting the result
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

    sort(a + 1, a + n - 1); // sorts the elements of the array a with indexes in range [1; n-2]

    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}