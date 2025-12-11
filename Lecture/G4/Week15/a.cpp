#include <iostream>

using namespace std;

int recMultiply(int a, int b) {
    if(b == 0) return 0;
    return a + recMultiply(a, b - 1); 
}

int main() {

    int a, b;
    cin >> a >> b;

    cout << recMultiply(a, b) << endl;

    return 0;
}