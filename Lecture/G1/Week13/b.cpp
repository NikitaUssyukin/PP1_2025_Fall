/*
Queue
*/

#include <iostream>
#include <queue>

using namespace std;

int main() {

    queue<int> q;

    cout << "empty: " << q.empty() << endl;

    int n;
    cin >> n;
    
    while(n > 0) {
        int x;
        cin >> x;
        q.push(x);
        --n;
    }

    cout << "empty: " << q.empty() << endl;
    cout << "size: " << q.size() << endl;
    cout << "elements: " << endl;

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}