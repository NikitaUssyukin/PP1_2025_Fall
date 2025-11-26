/*
Deque
*/

#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque<int> dq;

    cout << "empty: " << dq.empty() << endl;

    int n;
    cin >> n;
    
    while(n > 0) {
        int x;
        cin >> x;
        dq.push_back(x);
        // or
        // dq.push_front(x);
        --n;
    }

    cout << "empty: " << q.empty() << endl;
    cout << "size: " << q.size() << endl;
    cout << "elements: " << endl;

    for(int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << " ";
    }
    cout << endl;

    return 0;
}