#include <iostream>

using namespace std;

// 5! = 5 * 4 * 3 * 2 * 1 -> 120
// 3! = 3 * 2 * 1 -> 6

long long factorial(int a) {
    if(a == 0) return 1;
    return a * factorial(a - 1);
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