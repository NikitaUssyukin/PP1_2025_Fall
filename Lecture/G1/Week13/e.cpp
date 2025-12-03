/*
Stack, taking a .cpp file and checking whether all the bracket sequences are valid
*/

#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main() {

    stringstream ss;
    string s;
    while(cin >> s) {
        ss << s;
    }

    stack<char> st;

    /*
    brackets: []{}()

    we pop when:
    1) when st.top and s[i] do form a pair of brackets ([]/()/{}) 
    
    otherwise, we always push
    */

    s = ss.str(); // taking the input data from ss

    // checking what we actually have as our input
    // cout << s << endl;

    // (())()(((
    //
    /*
    (
    (
    (
    */

    for(int i = 0; i < s.size(); ++i) {
        if(
            (
                s[i] != '(' &&
                s[i] != ')' && 
                s[i] != '{' && 
                s[i] != '}' &&
                s[i] != '[' &&
                s[i] != ']'
            )
        ) {
            continue;
        }
        if(
            !st.empty() &&
            (
                (st.top() == '(' && s[i] == ')') ||
                (st.top() == '{' && s[i] == '}') ||
                (st.top() == '[' && s[i] == ']')
            ) 
        ) {
            st.pop();
        }
        else {
            st.push(s[i]);
        }
    }

    if(st.empty()) cout << "All brackets are placed correctly\n";
    else cout << "Brackets are placed incorrectly\n";

    return 0;
}
