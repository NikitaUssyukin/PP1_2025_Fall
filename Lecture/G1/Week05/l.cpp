/*
Range-based for loops
*/

#include <iostream>

using namespace std;

int main() {

    char greeting[] = "hello";
    
    int n = sizeof(greeting) / sizeof(greeting[0]); // amount of elements

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
