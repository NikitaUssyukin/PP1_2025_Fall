#include <iostream>

using namespace std;

int main() {

    char ch;
    cin >> ch;

    // implicitly type casting char into int
    // and then implicitly type casting back into char
    char result = ch + 1;
    
    cout << result << endl;

    return 0;
}