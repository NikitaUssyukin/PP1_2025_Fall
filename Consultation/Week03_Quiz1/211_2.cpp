#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    bool is_isosceles = (a == b || b == c || a == c);
    bool exists = (a + b > c && a + c > b && b + c > a);

    if(is_isosceles && exists) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}