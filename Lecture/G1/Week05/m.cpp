/*
Range-based for loops
*/

#include <iostream>

using namespace std;

int main() {

    string greeting = "hello";
    
    int n = greeting.length();

    for(int i = 0; i < n; ++i) {
        cout << greeting[i];
    }
    cout << endl;

    for(char c : greeting) {
        cout << c;
    }
    cout << endl;



    return 0;
}
