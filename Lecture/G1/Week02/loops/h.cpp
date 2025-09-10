
// Loops - for

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    int cnt = 0;

    int temp;

    for(int i = 1; i <= n; ++i) {
        cin >> temp;
        if(temp % 2 == 0) {
            ++cnt;
        }
    }

    cout << cnt << endl;

    return 0;
}