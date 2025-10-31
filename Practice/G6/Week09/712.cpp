#include <iostream>

using namespace std;

int count_equal_pairs(int a[], int b[], int n) {
    int cnt = 0;
    
    int cnt_a[101] = {}; // = {} fills the array with 0s when we know the size before compiling the program  
    int cnt_b[101] = {};

    for(int i = 0; i < n; ++i) {
        cnt_a[a[i]]++;
        cnt_b[b[i]]++;
    }

    for(int i = 0; i < 101; ++i) {
        cnt += min(cnt_a[i], cnt_b[i]);
    }

    return cnt;
}

int main() {

    int n;
    cin >> n;

    int a[n];
    int b[n];

    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    cout << count_equal_pairs(a, b, n) << endl;

    return 0;
}