/*
Demonstrating the quadratic complexity of the nested loop
*/

#include <iostream>

using namespace std;

int main() {

    int n = 100000;


    long long cnt = 0;

    // quadratic complexity
    // this loop will repeat itself n squared times (n * n)
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cnt++;
        }
    }

    cout << cnt << endl;
    
    return 0;
}