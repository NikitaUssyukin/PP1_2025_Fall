#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    if(n % 2 == 0) {
        if(n < 10) cout << "n is even and is less than 10\n";
        else cout << "n is not even or greater than 10 or both\n";
    }    
    else {
        cout << "n is not even or greater than 10 or both\n";
    }


    return 0;
}