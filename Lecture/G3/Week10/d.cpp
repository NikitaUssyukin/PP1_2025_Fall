/*
STL
Vector
Outputting elements
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n, vector<int>(m)); // 2D vector

    for(int i = 0; i < v.size(); ++i) {
        for(int j = 0; j < v[i].size(); ++j) cin >> v[i][j]; 
    }

    for(vector<int> row : v) {
        for(int col : row) cout << col << " ";
        cout << endl;
    }

    return 0;
}
