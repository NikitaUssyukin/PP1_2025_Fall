#include <iostream>

using namespace std;

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181
// 0, 1, 2, 3, 4, 5, 6, 7, ...                                        ...,   18,   19
long long fibonacci(int a) {
    if(a == 0 || a == 1) return a;
    return fibonacci(a - 1) + fibonacci(a - 2);
}

long long fibonacciWithLoop(int a) {
    long long res = 0;
    long long x1 = 0;
    long long x2 = 1;

    if(a == 1) res = 1;

    for(int i = 1; i < a; ++i) {
        res = x1 + x2;
        x1 = x2;
        x2 = res;
    }

    return res;
}

int main() {

    int a;
    cin >> a;

    cout << fibonacci(a) << endl;

    return 0;
}