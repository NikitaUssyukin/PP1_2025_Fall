/*
searching in a string
*/

#include <iostream>

using namespace std;

int main() {

    // freopen("input.txt", "r", stdin);

    string text;
    getline(cin, text);

    string word;
    cin >> word;

    size_t pos = text.find(word);

    // index where the word has been found
    // or string::npos if it wasn't found
    cout << pos << endl;

    if(pos != string::npos) {
        cout << "word " << word << " was found in text:\n" << text << endl;
        cout << "at index " << pos << endl;
    }
    else {
        cout << "word " << word << " was not found in text:\n" << text << endl;
    }


    return 0;
}