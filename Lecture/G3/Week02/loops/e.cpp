// Loops allow us to alter the control flow
// of the program
// by allowing us to specify how many times
// to repeat a specific block of code

#include <iostream>

using namespace std;

int main() {

    int a = -1;
    
    do {
        cout << a << endl;
        a--;
    } while(a >= 0);

    return 0;
}