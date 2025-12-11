#include <iostream>

using namespace std;

// recursive implementation
long long factorial(int a) {
    if(a == 0) return 1;
    return a * factorial(a - 1); 
}

// iterative implementation
long long factorialWithLoops(int a) {
    long long result = 1;
    
    while(a > 1) {
        result *= a;
        --a;
    }

    return result;
}

int main() {

    int a;
    cin >> a;

    cout << factorial(a) << endl;

    return 0;
}