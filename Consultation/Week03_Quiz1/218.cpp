#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int mx = -1000000000; // smallest value for integers from the problem statement

    for(int i = 1; i <= n; ++i) {
        int temp;
        cin >> temp;
        if(temp > mx) mx = temp;
    }

    cout << mx << endl;

    return 0;
}