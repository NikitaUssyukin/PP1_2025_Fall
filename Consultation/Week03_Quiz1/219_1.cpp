#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int mx = -1000000000; // smallest value for integers from the problem statement

    int p = 1; // position of maximum, by default it is 1

    for(int i = 1; i <= n; ++i) {
        int temp;
        cin >> temp;
        if(temp > mx) { 
            mx = temp;
            p = i;
        }
    }

    cout << p << endl;

    return 0;
}