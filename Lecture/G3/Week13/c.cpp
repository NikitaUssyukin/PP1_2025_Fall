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
    cin >> n; // 5
    
    while(n > 0) { // 1 2 3 4 5
        int x;
        cin >> x;
        dq.push_back(x);
        // or
        // dq.push_front(x);
        --n;
    }
    /*
    1 2 3 4 5
    */

    cout << "empty: " << dq.empty() << endl;
    cout << "size: " << dq.size() << endl;
    
    cout << "elements: " << endl;
    for(int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << " ";
    }
    /*
    1 2 3 4 5
    */
    
    return 0;
}