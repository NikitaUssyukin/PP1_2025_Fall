// Loops allow us to alter the control flow of the program
// By specifying the amount of repetitions for the code
// Loops - for, while, do while

#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    while(true) { // infinite loop
        if(a > 10) break; // infinite loop will be stopped here
        cout << a << endl;
        ++a; // same as a = a + 1
    }

    return 0;
}