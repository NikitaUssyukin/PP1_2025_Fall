#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, string> m; // our mongoDB

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string cmd, key, value;
        cin >> cmd;

        if(cmd == "set") {
            cin >> key >> value;
            m[key] = value;
        }
        else {
            cin >> key;
            if(m.find(key) != m.end()) {
                cout << m[key] << endl;
            }
            else {
                cout << "KE: no key " << key << " found in the document" << endl;
            }
        }
    }
    
    return 0;
}