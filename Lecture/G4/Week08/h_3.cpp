/*
searching in a string
str.find(word)
*/

#include <iostream>

using namespace std;

int main() {

    freopen("input.txt", "r", stdin);

    string text;
    getline(cin, text);

    string word;
    cin >> word;

    size_t pos = 0;
    
    pos = text.find(word, pos);
    
    while(pos != string::npos) {
        cout << "word " << word << " was found in text:\n" << text << endl;
        cout << "at index " << pos << endl;
        pos += 1;
        pos = text.find(word, pos);   
    }

    return 0;
}