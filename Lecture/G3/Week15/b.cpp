#include <iostream>

using namespace std;

// recursive solution
long long factorial(int a) {
    if(a == 0 || a == 1) return 1;
    return a * factorial(a - 1);
}

// iterative solution
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