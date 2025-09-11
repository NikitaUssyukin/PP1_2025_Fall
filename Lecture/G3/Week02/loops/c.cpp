// Loops allow us to alter the control flow
// of the program
// by allowing us to specify how many times
// to repeat a specific block of code

#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a;
    int cnt = 0;

    for(int i = 1; i <= n; ++i) { // ++i same as i = i + 1
        cin >> a;
        if(a % 2 == 0) cnt++;
    }

    cout << cnt << endl;
    
    return 0;
}