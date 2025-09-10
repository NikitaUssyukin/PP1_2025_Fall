
// Loops - for

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    do {
        cout << a << endl;
        a += 1; // same as a = a + 1;
    } while(a <= 5);

    return 0;
}