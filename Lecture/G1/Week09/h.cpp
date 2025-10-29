/*
input, doubling and output of all the elements in a 1d array using functions
*/

#include <iostream>

using namespace std;

void input_1d(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

void double_elements_of_1d(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        a[i] *= 2;
    }
}

void output_1d(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int n;
    cin >> n;

    int a[n];

    input_1d(a, n);

    double_elements_of_1d(a, n);

    output_1d(a, n);

    return 0;
}