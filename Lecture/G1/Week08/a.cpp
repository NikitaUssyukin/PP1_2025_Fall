/*
String

What is a string?
It is, essentially, an array of characters (char)

In C++, we have 2 kinds of strings:
- C-style, pointer based, null-terminated strings (char str[] = "hello")
- String class, std::string, modern strings (string str = "hello")

The focus of our lecture is the latter - std::string

std::string is dynamic in terms of its size

to get the size of the string:
str.size() / str.length()

to access individual letters:
unchecked access - str[index]
checked access   - str.at(index)

iterating over individual elements:

for(int i = 0; i < str.size(); ++i) cout << str[i];
or
for(char c : str) cout << c;

string input:
cin >> str;
getline(cin, str);
*/

#include <iostream>

using namespace std;

int main() {

    // initializing strings
    
    string s1;           // empty string
    string s2 = "hello"; // string containing "hello"
    string s3("hello");  // same thing, but now using a constructor
    string s4(10, 'h');  // constructor consisting of the character chr repeated n times
                         // string str(n, chr)

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;

    return 0;
}