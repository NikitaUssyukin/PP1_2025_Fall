#include <iostream>

using namespace std;

// 0, 1, 2, 3, 4, 5, 6, 7, ...                                        ...,   18,   19
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181

// recursive implementation
long long fibonacci(int a, int n) {
    if(a == 0) return 0;
    if(a == 1) return 1;
    return fibonacci(a - 1, n) + n * fibonacci(a - 2, n); 
}

// iterative implementation
long long fibonacciWithLoops(int a) {
    long long res = 0;
    long long x1 = 0;
    long long x2 = 1;

    if(a == 1) res = 1;
    
    while(a > 1) {
        res = x1 + x2;
        x1 = x2;
        x2 = res;
        --a;
    }

    return res;
}

int main() {

    int a;
    cin >> a;

    cout << fibonacci(a, n) << endl;

    return 0;
}