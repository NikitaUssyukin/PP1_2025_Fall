/*
STL, Part 2

Containers

1) Stack

pop/push
 ↑↓

|-| 
|-|
|-|
|-|
|-|
- Examples (real-world): 
    - A stack of trays in a cafeteria
    - A tube of pringles
    - The "undo" operation in text editors

2) Queue
        ———————————————————
push ->  * | * | * | * | *  ->  pop
        ———————————————————
- Examples (real-world): 
    - A line to the checkout in the supermarket
    - Processing of text input 
        - First symbol typed on the keyboard is the first to appear on the screen

3) Deque (double-ended queue)
              ———————————————————
push/pop  <->  * | * | * | * | *    <->  push/pop
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
    cin >> n; // 5
    
    while(n > 0) { // 1 2 3 4 5
        int x;
        cin >> x;
        s.push(x);
        --n;
    }
    /*
    |5|
    |4|
    |3|
    |2|
    |1|
    */

    cout << "empty: " << s.empty() << endl;
    cout << "size: " << s.size() << endl;
    cout << "elements: " << endl;

    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    /*
    5
    4
    3
    2
    1
    */

    return 0;
}