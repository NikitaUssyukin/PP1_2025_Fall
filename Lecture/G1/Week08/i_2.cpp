/*
search in a string
str.find(word)

if we do have a word in str, find will return us
the index where the word starts

otherwise find returns us the constant string::npos
*/

#include <iostream>

using namespace std;

int main() {

    string text;
    getline(cin, text);

    string word;
    cin >> word;

    size_t pos = text.find(word);

    if(pos != string::npos) {
        cout << "word " << word << " found in text:\n" << text << endl;
        cout << "at the index " << pos << endl;
    }
    else {
        cout << "word " << word << " not found in text:\n" << text << endl;
    }

    return 0;
}