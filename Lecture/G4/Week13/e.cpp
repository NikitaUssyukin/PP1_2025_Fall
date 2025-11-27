/*
Given string s with a bracket sequence, determine whether it is valid
()         -> ok
(          -> not ok
())        -> not ok
)(         -> not ok
(())(()()) -> ok
()()()()() -> ok
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
        else if(st.top() == '(' && s[i] == ')') st.pop();
        else st.push(s[i]);
    }

    if(st.empty()) cout << "ok\n";
    else cout << "not ok\n";

    return 0;
}