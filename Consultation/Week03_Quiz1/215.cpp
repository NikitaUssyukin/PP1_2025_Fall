#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int temp; // variable to take the numbers one by one
    long long sum = 0;
    // int values go from -2,147,483,648 to 2,147,483,647
    // long long values go from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

    for(int i = 1; i <= n; ++i) { // ++i is the same as i = i + 1
        cin >> temp;
        sum += temp; // same as sum = sum + temp
    }

    cout << sum << endl;

    return 0;
}