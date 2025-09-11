// Loops allow us to alter the control flow of the program
// By specifying the amount of repetitions for the code
// Loops - for, while, do while

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    while(a <= 10) { // infinite loop
        if(a % 2 == 0) {
            ++a;
            continue;
        }
        cout << a << endl;
        ++a; // same as a = a + 1
    }

    return 0;
}