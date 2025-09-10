
// Loops - for

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    while(a <= 5) {
        a += 1; // same as a = a + 1;
        if(a % 2 == 0) {
            continue;
        }
        cout << a << endl;
    }

    return 0;
}