// Loops allow us to alter the control flow of the program
// By specifying the amount of repetitions for the code
// Loops - for, while, do while

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    do {
        cout << a << endl;
        ++a; // same as a = a + 1
    } while(a <= 10);

    return 0;
}