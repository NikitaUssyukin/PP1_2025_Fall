// Loops allow us to alter the control flow
// of the program
// by allowing us to specify how many times
// to repeat a specific block of code

#include <iostream>

using namespace std;

int main() {

    int a = 1;

    for(int i = 1; i <= 5; ++i) { // ++i same as i = i + 1
        cout << a << endl;
        a += 1; // same as a = a + 1;
    }
    
    return 0;
}