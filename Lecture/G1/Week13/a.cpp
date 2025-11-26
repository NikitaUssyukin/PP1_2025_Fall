/*
STL, Part 2

Containers

Stack

pop/push
 ↑↓
|-|
|-|
|-|
|-|
- Examples (real-world): 
    - A stack of traysin a cafeteria
    - A tube of pringles
    - The "undo" operation in text editors

Queue
        ———————————————————
push ->  * | * | * | * | *  ->  pop
        ———————————————————
- Examples (real-world): 
    - A line to the checkout in the supermarket
    - Processing of text input 
        - First symbol typed on the keyboard is the first to appear on the screen

Deque
              ———————————————————
push/pop  <->  * | * | * | * | *   <->  push/pop
              ———————————————————
- Examples (real-world): 
    - A train - carriages can be added both to the back and front
    - A deck of cards - a card can be taken either from the front or the bottom

https://github.com/Beisenbek/programming-principles-1/tree/main/lab09
*/

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