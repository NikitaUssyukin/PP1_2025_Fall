#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int b[m];

    for(int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    int c[n + m];

    int i, j; // indexes of elements in a and b
              // for comparison

    i = 0;
    j = 0;

    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            c[i + j] = a[i];
            ++i;
        }
        else {
            c[i + j] = b[j];
            ++j;
        }
    }

    while(i < n) {
        c[i + j] = a[i];
        ++i;
    }

    while(j < m) {
        c[i + j] = b[j];
        ++j;
    }

    for(int i = 0; i < n + m; ++i) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}