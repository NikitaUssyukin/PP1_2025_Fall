#include <iostream>

using namespace std;

int main() {

    char c = 'a';
    char* ptr = &c;

    // segfault
    while(true) {
        cout << *ptr;
        ++ptr;
    }

    return 0;
}