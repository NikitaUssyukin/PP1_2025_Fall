/*
searching in a string
str.find(word)
*/

#include <iostream>

using namespace std;

int main() {

    string text;
    getline(cin, text);

    string word;
    cin >> word;

    size_t pos = text.find(word);
    
    // index where the word has been found
    cout << pos << endl;

    // cout << string::npos;

    if(pos != string::npos) { // if pos != string::npos is true, it means the word has been found
        for(size_t i = pos; i < pos + word.size(); ++i) {
            cout << text[i];
        }
        cout << endl;
    }

    return 0;
}