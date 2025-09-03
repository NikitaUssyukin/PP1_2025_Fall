// Data types

/*
int - integer numbers
double - decimal numbers
float - decimal numbers
bool - boolean values (true/false, 1/0)
char - single characters
string - sequence of characters (text)
*/

#include <iostream>

using namespace std;

int main() {    

    // variables to store the data
    int a, b; // undefined values

    // input of data from the terminal into the variable
    cin >> a >> b;
    
    // output of the data
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl; // calculation of the remainder

    return 0;
}