#include <iostream>
#include <map>

using namespace std;

int main() {

    int n;
    cin >> n;

    map<int, double> m;
    for(int i = 50; i < 100; ++i) {
        double gp = 1.0 + (i - 50) / 5 * 1.0/3;
        m[i] = gp;
        // checking correctness of the calculations
        // cout << i << " " << gp << endl;
    }
    m[100] = 4.0;

    // checking the contents of the map
    // for(auto p : m) { // same as for(pair<int, double> p : m) 
    //     cout << p.first << " " << p.second << endl;
    // }

    double sum_gp = 0;
    int sum_cred = 0;

    for(int i = 0; i < n; ++i) {
        int a1, a2, fe, cred;
        cin >> a1 >> a2 >> fe >> cred;

        int total_p = a1 + a2 + fe;

        double gp = 0.0;

        if(a1 + a2 >= 30 && fe >= 20 && total_p >= 50) {
            gp = m[total_p];
        }

        sum_gp += gp * cred;
        sum_cred += cred;
    }

    double gpa = sum_gp / sum_cred;

    cout << gpa << endl;

    return 0;
}