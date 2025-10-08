/*
Demonstration of a quadratic complexity of nested loops
O(n^2)
*/

#include <iostream>

using namespace std;

int main() {

    int n = 1000000; // repetitions of the outer and inner for loops
    
    /*
    Seconds           : 34
    Milliseconds      : 112
    Ticks             : 3341129040
    TotalDays         : 0.0038670475
    TotalHours        : 0.09280914
    TotalMinutes      : 5.5685484
    TotalSeconds      : 334.112904
    TotalMilliseconds : 334112.904
    */

    long long cnt = 0;

    for(int i = 0; i < n; ++i) {
        
        for(int j = 0; j < n; ++j) {
            cnt++;
        }

    }

    cout << cnt << endl;

    return 0;
}