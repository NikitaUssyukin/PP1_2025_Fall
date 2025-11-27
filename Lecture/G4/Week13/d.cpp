/*
Given string s, remove all pairs of consecutive duplicate letters (symbols) from it

aabc     -> bc
aabbbc   -> bc
aaabddba -> "" (empty string)
..a!!1   -> a1
*/

#include <iostream>
#include <stack>

using namespace std;

int main() {

    string s;
    cin >> s;

    stack<char> st;
    
    for(int i = 0; i < s.size(); ++i) {
        if(st.empty()) st.push(s[i]);
        else if(st.top() == s[i]) st.pop();
        else st.push(s[i]);
    }

    string res = "";

    while(!st.empty()) {
        res = st.top() + res; // reversing elements stored in a stack
        st.pop();
    }

    cout << res << endl;

    return 0;
}