// Loops allow us to alter the control flow
// of the program
// by allowing us to specify how many times
// to repeat a specific block of code

#include <iostream>

using namespace std;

int main() {

    int a = 5;
    
    while(a >= 0) {
        if(a % 2 == 0) {
            a--;
            continue;
        }
        cout << a << endl;
        a--;
    }

    return 0;
}