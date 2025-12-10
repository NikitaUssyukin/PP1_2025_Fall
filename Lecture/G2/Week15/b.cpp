#include <iostream>

using namespace std;

/*
n! = n * (n - 1) * (n - 2) * ... * 1
n! = n * (n - 1)!
1! = 1
0! = 1

3! = 3 * 2 * 1 -> 3
2! = 2 * 1 -> 2
1! = 1
0! = 1
*/

long long factorial(int a) {
    if(a > 1) return a * factorial(a - 1);
    return 1;
}

long long factorialWithLoop(int a) {
    long long res = 1;

    while(a > 0) {
        res *= a;
        --a;
    }

    return res;
}

int main() {

    int a;
    cin >> a;

    cout << factorial(a) << endl;

    return 0;
}