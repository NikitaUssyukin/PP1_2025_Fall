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

    cout << pos << endl;

    return 0;
}