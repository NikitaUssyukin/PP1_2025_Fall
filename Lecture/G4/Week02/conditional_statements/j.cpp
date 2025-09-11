#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    bool flag = (n % 2 == 0) && (n < 10);  

    if(flag) {
        cout << "n is even and is less than 10\n";
    }
    else {
        cout << "n is not even or greater than 10 or both\n";
    }


    return 0;
}