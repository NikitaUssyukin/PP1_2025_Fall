/*
Strings

What is a string?

It is, essentially, an array of characters (char)

In C++, we have 2 kinds of strings:
- C-style, pointer-based, null terminated strings (char str[] = "hello";)
- String class, std::string, modern strings (string str = "hello";)

We're going to focus mostly on the latter - std::string

std::string is dynamic in terms of its size
i.e. we can create it empty and then add new elemetns to it
adding elements increases size
and we can also erase elements - decrease the size

to get the size of the string:
str.size() / str.length()

to access individual elements (symbols):
unchecked access - str[index]
checked access   - str.at(index)

iterating over individual elements:
for(int i = 0; i < str.size(); ++i) cout << str[i];
or
for(char c : str) cout << c;
or
for(char &c : str) cout << c;

string input:
cin >> str;
getline(cin, str);

string output:
cout << str;
or
use the examples of for loops above
*/

#include <iostream>

using namespace std;

int main() {

    // initializing strings
    
    string s1;           // empty string
    string s2 = "hello"; // string containing "hello"
    string s3("hello");  // same thing, but now using a constructor
    string s4(10, 'h');  // constructor creating a string with cnt repetitions of character ch
                         // string str(cnt, ch)

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;

    return 0;
}