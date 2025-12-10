#include <iostream>

using namespace std;

int main() {

    int a[3] = {1, 2, 3};

    for(int i = 0; i < 10000; ++i) {
        a[i] *= 2;
    }

    cout << "Finished.\n";

    return 0;
}