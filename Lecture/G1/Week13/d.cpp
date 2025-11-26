/*
Stack, removing duplicate 0s from a binary string

1001       -> 11
1001010011 -> 110111
*/

#include <iostream>
#include <stack>

using namespace std;

int main() {

    string s;
    cin >> s;

    stack<char> st;

    /*
    conditions when we push:
    1) |-| (empty) <- 1/0
    2) |1| <- 1/0
    3) |0| <- 1

    otherwise, we always pop
    */

    for(int i = 0; i < s.size(); ++i) {
        if(st.empty() || (st.top() != s[i]) || st.top() == '1') {
            st.push(s[i]);
        }
        else {
            st.pop();
        }
    }

    string res = "";

    while(!st.empty()) {
        res = st.top() + res;
        st.pop();
    }

    cout << res << endl;

    return 0;
}