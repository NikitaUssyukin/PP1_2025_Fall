#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> s;

    cout << "empty: " << s.empty() << endl;

    int n;
    cin >> n;
    
    while(n > 0) {
        int x;
        cin >> x;
        s.push(x);
        --n;
    }

    cout << "empty: " << s.empty() << endl;
    cout << "size: " << s.size() << endl;
    cout << "elements: " << endl;

    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}